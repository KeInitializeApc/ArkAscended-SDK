#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
// (None)

class UClass* UAnimNotifyState_TimedNiagaraEffect::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotifyState_TimedNiagaraEffect");

	return Clss;
}


// AnimNotifyState_TimedNiagaraEffect NiagaraAnimNotifies.Default__AnimNotifyState_TimedNiagaraEffect
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotifyState_TimedNiagaraEffect* UAnimNotifyState_TimedNiagaraEffect::GetDefaultObj()
{
	static class UAnimNotifyState_TimedNiagaraEffect* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotifyState_TimedNiagaraEffect*>(UAnimNotifyState_TimedNiagaraEffect::StaticClass()->DefaultObject);

	return Default;
}


// Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect.GetSpawnedEffect
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UMeshComponent*              MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// class UFXSystemComponent*          ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UFXSystemComponent* UAnimNotifyState_TimedNiagaraEffect::GetSpawnedEffect(class UMeshComponent** MeshComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotifyState_TimedNiagaraEffect", "GetSpawnedEffect");

	Params::UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MeshComp != nullptr)
		*MeshComp = Parms.MeshComp;

	return Parms.ReturnValue;

}


// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced
// (None)

class UClass* UAnimNotifyState_TimedNiagaraEffectAdvanced::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotifyState_TimedNiagaraEffectAdvanced");

	return Clss;
}


// AnimNotifyState_TimedNiagaraEffectAdvanced NiagaraAnimNotifies.Default__AnimNotifyState_TimedNiagaraEffectAdvanced
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotifyState_TimedNiagaraEffectAdvanced* UAnimNotifyState_TimedNiagaraEffectAdvanced::GetDefaultObj()
{
	static class UAnimNotifyState_TimedNiagaraEffectAdvanced* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotifyState_TimedNiagaraEffectAdvanced*>(UAnimNotifyState_TimedNiagaraEffectAdvanced::StaticClass()->DefaultObject);

	return Default;
}


// Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced.GetNotifyProgress
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UMeshComponent*              MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UAnimNotifyState_TimedNiagaraEffectAdvanced::GetNotifyProgress(class UMeshComponent** MeshComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotifyState_TimedNiagaraEffectAdvanced", "GetNotifyProgress");

	Params::UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MeshComp != nullptr)
		*MeshComp = Parms.MeshComp;

	return Parms.ReturnValue;

}


// Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
// (None)

class UClass* UAnimNotify_PlayNiagaraEffect::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_PlayNiagaraEffect");

	return Clss;
}


// AnimNotify_PlayNiagaraEffect NiagaraAnimNotifies.Default__AnimNotify_PlayNiagaraEffect
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotify_PlayNiagaraEffect* UAnimNotify_PlayNiagaraEffect::GetDefaultObj()
{
	static class UAnimNotify_PlayNiagaraEffect* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_PlayNiagaraEffect*>(UAnimNotify_PlayNiagaraEffect::StaticClass()->DefaultObject);

	return Default;
}


// Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UFXSystemComponent*          ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UFXSystemComponent* UAnimNotify_PlayNiagaraEffect::GetSpawnedEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotify_PlayNiagaraEffect", "GetSpawnedEffect");

	Params::UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


