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
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

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
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

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
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

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
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

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
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

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
// double                             StartTime                                                        (BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_Play_StartTime_ImplicitCast                             (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, EditConst, SubobjectReference)

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
// class UParticleSystem*             Particle                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
// struct FVector                     ParticleScale                                                    (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// class USoundBase*                  Sound                                                            (ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// class APrimalCharacter*            Player                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)

class APrimalCharacter* ATekArmor_EffectActor_C::InitTekEffect(const struct FVector& ParticleScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "InitTekEffect");

	Params::ATekArmor_EffectActor_C_InitTekEffect_Params Parms{};

	Parms.ParticleScale = ParticleScale;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.PlayerDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            DiedCharacter                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)

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
// class UParticleSystem*             Particle                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
// struct FVector                     ParticleScale                                                    (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// class USoundBase*                  Sound                                                            (ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

class USoundBase* ATekArmor_EffectActor_C::SetTekFX(const struct FVector& ParticleScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "SetTekFX");

	Params::ATekArmor_EffectActor_C_SetTekFX_Params Parms{};

	Parms.ParticleScale = ParticleScale;

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
// int32                              EntryPoint                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference)
// class UParticleSystem*             K2Node_CustomEvent_particle_1                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, EditConst, SubobjectReference, Interp)
// struct FVector                     K2Node_CustomEvent_particleScale_1                               (Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, EditConst, SubobjectReference, Interp)
// class USoundBase*                  K2Node_CustomEvent_Sound_1                                       (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// class APrimalCharacter*            K2Node_CustomEvent_player                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_NotEqual_VectorVector_ReturnValue                       (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class APrimalCharacter*            K2Node_CustomEvent_DiedCharacter                                 (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, EditConst, SubobjectReference)
// class UParticleSystem*             K2Node_CustomEvent_particle                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, EditConst, SubobjectReference)
// struct FVector                     K2Node_CustomEvent_particleScale                                 (Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
// class USoundBase*                  K2Node_CustomEvent_Sound                                         (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_NotEqual_VectorVector_ReturnValue_1                     (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               K2Node_CustomEvent_active_1                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, EditConst, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_CustomEvent_active                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, EditConst, SubobjectReference)

bool ATekArmor_EffectActor_C::ExecuteUbergraph_TekArmor_EffectActor(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "ExecuteUbergraph_TekArmor_EffectActor");

	Params::ATekArmor_EffectActor_C_ExecuteUbergraph_TekArmor_EffectActor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


