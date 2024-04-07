#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RightClimbing_ImpactEffect_Rock.RightClimbing_ImpactEffect_Rock_C
// (Actor)

class UClass* ARightClimbing_ImpactEffect_Rock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RightClimbing_ImpactEffect_Rock_C");

	return Clss;
}


// RightClimbing_ImpactEffect_Rock_C RightClimbing_ImpactEffect_Rock.Default__RightClimbing_ImpactEffect_Rock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARightClimbing_ImpactEffect_Rock_C* ARightClimbing_ImpactEffect_Rock_C::GetDefaultObj()
{
	static class ARightClimbing_ImpactEffect_Rock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARightClimbing_ImpactEffect_Rock_C*>(ARightClimbing_ImpactEffect_Rock_C::StaticClass()->DefaultObject);

	return Default;
}

}


