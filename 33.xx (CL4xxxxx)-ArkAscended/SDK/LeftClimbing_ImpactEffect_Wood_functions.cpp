#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeftClimbing_ImpactEffect_Wood.LeftClimbing_ImpactEffect_Wood_C
// (Actor)

class UClass* ALeftClimbing_ImpactEffect_Wood_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeftClimbing_ImpactEffect_Wood_C");

	return Clss;
}


// LeftClimbing_ImpactEffect_Wood_C LeftClimbing_ImpactEffect_Wood.Default__LeftClimbing_ImpactEffect_Wood_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALeftClimbing_ImpactEffect_Wood_C* ALeftClimbing_ImpactEffect_Wood_C::GetDefaultObj()
{
	static class ALeftClimbing_ImpactEffect_Wood_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALeftClimbing_ImpactEffect_Wood_C*>(ALeftClimbing_ImpactEffect_Wood_C::StaticClass()->DefaultObject);

	return Default;
}

}


