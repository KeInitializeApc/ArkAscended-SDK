#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeapBaseClub.WeapBaseClub_C
// (Actor)

class UClass* AWeapBaseClub_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeapBaseClub_C");

	return Clss;
}


// WeapBaseClub_C WeapBaseClub.Default__WeapBaseClub_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeapBaseClub_C* AWeapBaseClub_C::GetDefaultObj()
{
	static class AWeapBaseClub_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeapBaseClub_C*>(AWeapBaseClub_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WeapBaseClub.WeapBaseClub_C.DoAppliedDamageToTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageTarget                                                     (Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig)
// double                             ElementCostMultiplier                                            (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              DamageIn                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               bExtraDamage                                                     (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

bool AWeapBaseClub_C::DoAppliedDamageToTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapBaseClub_C", "DoAppliedDamageToTarget");

	Params::AWeapBaseClub_C_DoAppliedDamageToTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


