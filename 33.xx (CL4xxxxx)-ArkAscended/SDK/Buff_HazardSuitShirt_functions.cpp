#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_HazardSuitShirt.Buff_HazardSuitShirt_C
// (Actor)

class UClass* ABuff_HazardSuitShirt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_HazardSuitShirt_C");

	return Clss;
}


// Buff_HazardSuitShirt_C Buff_HazardSuitShirt.Default__Buff_HazardSuitShirt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_HazardSuitShirt_C* ABuff_HazardSuitShirt_C::GetDefaultObj()
{
	static class ABuff_HazardSuitShirt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_HazardSuitShirt_C*>(ABuff_HazardSuitShirt_C::StaticClass()->DefaultObject);

	return Default;
}

}


