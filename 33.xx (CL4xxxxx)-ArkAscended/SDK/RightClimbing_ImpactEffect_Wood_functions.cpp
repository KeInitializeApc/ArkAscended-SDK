#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RightClimbing_ImpactEffect_Wood.RightClimbing_ImpactEffect_Wood_C
// (Actor)

class UClass* ARightClimbing_ImpactEffect_Wood_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RightClimbing_ImpactEffect_Wood_C");

	return Clss;
}


// RightClimbing_ImpactEffect_Wood_C RightClimbing_ImpactEffect_Wood.Default__RightClimbing_ImpactEffect_Wood_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARightClimbing_ImpactEffect_Wood_C* ARightClimbing_ImpactEffect_Wood_C::GetDefaultObj()
{
	static class ARightClimbing_ImpactEffect_Wood_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARightClimbing_ImpactEffect_Wood_C*>(ARightClimbing_ImpactEffect_Wood_C::StaticClass()->DefaultObject);

	return Default;
}

}


