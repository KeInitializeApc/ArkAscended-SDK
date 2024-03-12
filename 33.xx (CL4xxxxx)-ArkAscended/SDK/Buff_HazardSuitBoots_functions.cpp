#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_HazardSuitBoots.Buff_HazardSuitBoots_C
// (Actor)

class UClass* ABuff_HazardSuitBoots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_HazardSuitBoots_C");

	return Clss;
}


// Buff_HazardSuitBoots_C Buff_HazardSuitBoots.Default__Buff_HazardSuitBoots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_HazardSuitBoots_C* ABuff_HazardSuitBoots_C::GetDefaultObj()
{
	static class ABuff_HazardSuitBoots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_HazardSuitBoots_C*>(ABuff_HazardSuitBoots_C::StaticClass()->DefaultObject);

	return Default;
}

}


