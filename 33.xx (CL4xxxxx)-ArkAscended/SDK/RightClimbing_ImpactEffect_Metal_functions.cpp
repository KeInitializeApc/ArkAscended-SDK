#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RightClimbing_ImpactEffect_Metal.RightClimbing_ImpactEffect_Metal_C
// (Actor)

class UClass* ARightClimbing_ImpactEffect_Metal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RightClimbing_ImpactEffect_Metal_C");

	return Clss;
}


// RightClimbing_ImpactEffect_Metal_C RightClimbing_ImpactEffect_Metal.Default__RightClimbing_ImpactEffect_Metal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARightClimbing_ImpactEffect_Metal_C* ARightClimbing_ImpactEffect_Metal_C::GetDefaultObj()
{
	static class ARightClimbing_ImpactEffect_Metal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARightClimbing_ImpactEffect_Metal_C*>(ARightClimbing_ImpactEffect_Metal_C::StaticClass()->DefaultObject);

	return Default;
}

}


