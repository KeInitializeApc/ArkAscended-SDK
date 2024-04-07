#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeftClimbing_ImpactEffect_Leaves.LeftClimbing_ImpactEffect_Leaves_C
// (Actor)

class UClass* ALeftClimbing_ImpactEffect_Leaves_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeftClimbing_ImpactEffect_Leaves_C");

	return Clss;
}


// LeftClimbing_ImpactEffect_Leaves_C LeftClimbing_ImpactEffect_Leaves.Default__LeftClimbing_ImpactEffect_Leaves_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALeftClimbing_ImpactEffect_Leaves_C* ALeftClimbing_ImpactEffect_Leaves_C::GetDefaultObj()
{
	static class ALeftClimbing_ImpactEffect_Leaves_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALeftClimbing_ImpactEffect_Leaves_C*>(ALeftClimbing_ImpactEffect_Leaves_C::StaticClass()->DefaultObject);

	return Default;
}

}


