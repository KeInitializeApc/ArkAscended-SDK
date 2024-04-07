#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeftClimbing_ImpactEffect_Rock.LeftClimbing_ImpactEffect_Rock_C
// (Actor)

class UClass* ALeftClimbing_ImpactEffect_Rock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeftClimbing_ImpactEffect_Rock_C");

	return Clss;
}


// LeftClimbing_ImpactEffect_Rock_C LeftClimbing_ImpactEffect_Rock.Default__LeftClimbing_ImpactEffect_Rock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALeftClimbing_ImpactEffect_Rock_C* ALeftClimbing_ImpactEffect_Rock_C::GetDefaultObj()
{
	static class ALeftClimbing_ImpactEffect_Rock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALeftClimbing_ImpactEffect_Rock_C*>(ALeftClimbing_ImpactEffect_Rock_C::StaticClass()->DefaultObject);

	return Default;
}

}


