#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TekArmor_EffectActor.TekArmor_EffectActor_C
// (Actor)

class UClass* ATekArmor_EffectActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TekArmor_EffectActor_C");

	return Clss;
}


// TekArmor_EffectActor_C TekArmor_EffectActor.Default__TekArmor_EffectActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATekArmor_EffectActor_C* ATekArmor_EffectActor_C::GetDefaultObj()
{
	static class ATekArmor_EffectActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATekArmor_EffectActor_C*>(ATekArmor_EffectActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_ParticleScale
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

bool ATekArmor_EffectActor_C::OnRep_ParticleScale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "OnRep_ParticleScale");

	Params::ATekArmor_EffectActor_C_OnRep_ParticleScale_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_bParticlesOn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

bool ATekArmor_EffectActor_C::OnRep_bParticlesOn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "OnRep_bParticlesOn");

	Params::ATekArmor_EffectActor_C_OnRep_bParticlesOn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_bSoundOn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

bool ATekArmor_EffectActor_C::OnRep_bSoundOn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "OnRep_bSoundOn");

	Params::ATekArmor_EffectActor_C_OnRep_bSoundOn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_TekSoundRef
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

bool ATekArmor_EffectActor_C::OnRep_TekSoundRef()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "OnRep_TekSoundRef");

	Params::ATekArmor_EffectActor_C_OnRep_TekSoundRef_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_TekParticleTemplate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

bool ATekArmor_EffectActor_C::OnRep_TekParticleTemplate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "OnRep_TekParticleTemplate");

	Params::ATekArmor_EffectActor_C_OnRep_TekParticleTemplate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.SetSoundActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// double                             StartTime                                                        (Edit, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_Play_StartTime_ImplicitCast                             (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

float ATekArmor_EffectActor_C::SetSoundActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "SetSoundActive");

	Params::ATekArmor_EffectActor_C_SetSoundActive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.Set ParticleActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

bool ATekArmor_EffectActor_C::Set_ParticleActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "Set ParticleActive");

	Params::ATekArmor_EffectActor_C_Set_ParticleActive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.InitTekEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*             Particle                                                         (ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     ParticleScale                                                    (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class USoundBase*                  Sound                                                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// class APrimalCharacter*            Player                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)

class APrimalCharacter* ATekArmor_EffectActor_C::InitTekEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "InitTekEffect");

	Params::ATekArmor_EffectActor_C_InitTekEffect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.PlayerDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            DiedCharacter                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void ATekArmor_EffectActor_C::PlayerDied(class APrimalCharacter* DiedCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "PlayerDied");

	Params::ATekArmor_EffectActor_C_PlayerDied_Params Parms{};

	Parms.DiedCharacter = DiedCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.SetTekFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*             Particle                                                         (ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     ParticleScale                                                    (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class USoundBase*                  Sound                                                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)

class USoundBase* ATekArmor_EffectActor_C::SetTekFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "SetTekFX");

	Params::ATekArmor_EffectActor_C_SetTekFX_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.Replicate_SetSoundState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

bool ATekArmor_EffectActor_C::Replicate_SetSoundState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "Replicate_SetSoundState");

	Params::ATekArmor_EffectActor_C_Replicate_SetSoundState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.Replicate_SetParticleState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

bool ATekArmor_EffectActor_C::Replicate_SetParticleState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "Replicate_SetParticleState");

	Params::ATekArmor_EffectActor_C_Replicate_SetParticleState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.ExecuteUbergraph_TekArmor_EffectActor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UParticleSystem*             K2Node_CustomEvent_particle_1                                    (ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     K2Node_CustomEvent_particleScale_1                               (Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class USoundBase*                  K2Node_CustomEvent_sound_1                                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class APrimalCharacter*            K2Node_CustomEvent_player                                        (ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_NotEqual_VectorVector_ReturnValue                       (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class APrimalCharacter*            K2Node_CustomEvent_DiedCharacter                                 (Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UParticleSystem*             K2Node_CustomEvent_particle                                      (ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     K2Node_CustomEvent_particleScale                                 (Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class USoundBase*                  K2Node_CustomEvent_sound                                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_NotEqual_VectorVector_ReturnValue_1                     (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               K2Node_CustomEvent_active_1                                      (Edit, ConstParm, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_CustomEvent_active                                        (Edit, ConstParm, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

bool ATekArmor_EffectActor_C::ExecuteUbergraph_TekArmor_EffectActor(int32* EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "ExecuteUbergraph_TekArmor_EffectActor");

	Params::ATekArmor_EffectActor_C_ExecuteUbergraph_TekArmor_EffectActor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	return Parms.ReturnValue;

}

}


