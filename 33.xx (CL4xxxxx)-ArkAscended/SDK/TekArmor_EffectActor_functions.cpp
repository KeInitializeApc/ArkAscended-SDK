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
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

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
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

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
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

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
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

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
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

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
// bool                               Active                                                           (Edit, ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// double                             StartTime                                                        (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_Play_StartTime_ImplicitCast                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

float ATekArmor_EffectActor_C::SetSoundActive(bool* Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "SetSoundActive");

	Params::ATekArmor_EffectActor_C_SetSoundActive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Active != nullptr)
		*Active = Parms.Active;

	return Parms.ReturnValue;

}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.Set ParticleActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (Edit, ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

void ATekArmor_EffectActor_C::Set_ParticleActive(bool* Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "Set ParticleActive");

	Params::ATekArmor_EffectActor_C_Set_ParticleActive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Active != nullptr)
		*Active = Parms.Active;

}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.InitTekEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*             Particle                                                         (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     ParticleScale                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class USoundBase*                  Sound                                                            (ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class APrimalCharacter*            Player                                                           (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)

struct FVector ATekArmor_EffectActor_C::InitTekEffect(class USoundBase* Sound, class APrimalCharacter** Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "InitTekEffect");

	Params::ATekArmor_EffectActor_C_InitTekEffect_Params Parms{};

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);

	if (Player != nullptr)
		*Player = Parms.Player;

	return Parms.ReturnValue;

}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.PlayerDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            DiedCharacter                                                    (Net, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)

class APrimalCharacter* ATekArmor_EffectActor_C::PlayerDied()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "PlayerDied");

	Params::ATekArmor_EffectActor_C_PlayerDied_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.SetTekFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*             Particle                                                         (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     ParticleScale                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class USoundBase*                  Sound                                                            (ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

struct FVector ATekArmor_EffectActor_C::SetTekFX(class USoundBase* Sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "SetTekFX");

	Params::ATekArmor_EffectActor_C_SetTekFX_Params Parms{};

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.Replicate_SetSoundState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (Edit, ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

void ATekArmor_EffectActor_C::Replicate_SetSoundState(bool* Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "Replicate_SetSoundState");

	Params::ATekArmor_EffectActor_C_Replicate_SetSoundState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Active != nullptr)
		*Active = Parms.Active;

}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.Replicate_SetParticleState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (Edit, ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

void ATekArmor_EffectActor_C::Replicate_SetParticleState(bool* Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "Replicate_SetParticleState");

	Params::ATekArmor_EffectActor_C_Replicate_SetParticleState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Active != nullptr)
		*Active = Parms.Active;

}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.ExecuteUbergraph_TekArmor_EffectActor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue                        (Edit, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UParticleSystem*             K2Node_CustomEvent_particle_1                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// struct FVector                     K2Node_CustomEvent_particleScale_1                               (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class USoundBase*                  K2Node_CustomEvent_sound_1                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class APrimalCharacter*            K2Node_CustomEvent_player                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_NotEqual_VectorVector_ReturnValue                       (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class APrimalCharacter*            K2Node_CustomEvent_DiedCharacter                                 (Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UParticleSystem*             K2Node_CustomEvent_particle                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     K2Node_CustomEvent_particleScale                                 (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class USoundBase*                  K2Node_CustomEvent_sound                                         (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_NotEqual_VectorVector_ReturnValue_1                     (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               K2Node_CustomEvent_active_1                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_CustomEvent_active                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool ATekArmor_EffectActor_C::ExecuteUbergraph_TekArmor_EffectActor(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "ExecuteUbergraph_TekArmor_EffectActor");

	Params::ATekArmor_EffectActor_C_ExecuteUbergraph_TekArmor_EffectActor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_IsValid_ReturnValue_3 != nullptr)
		*CallFunc_IsValid_ReturnValue_3 = Parms.CallFunc_IsValid_ReturnValue_3;

	if (CallFunc_IsValid_ReturnValue_4 != nullptr)
		*CallFunc_IsValid_ReturnValue_4 = Parms.CallFunc_IsValid_ReturnValue_4;

	return Parms.ReturnValue;

}

}


