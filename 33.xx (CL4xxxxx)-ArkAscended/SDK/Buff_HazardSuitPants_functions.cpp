#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_HazardSuitPants.Buff_HazardSuitPants_C
// (Actor)

class UClass* ABuff_HazardSuitPants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_HazardSuitPants_C");

	return Clss;
}


// Buff_HazardSuitPants_C Buff_HazardSuitPants.Default__Buff_HazardSuitPants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_HazardSuitPants_C* ABuff_HazardSuitPants_C::GetDefaultObj()
{
	static class ABuff_HazardSuitPants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_HazardSuitPants_C*>(ABuff_HazardSuitPants_C::StaticClass()->DefaultObject);

	return Default;
}

}


