#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_HazardSuitGloves.Buff_HazardSuitGloves_C
// (Actor)

class UClass* ABuff_HazardSuitGloves_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_HazardSuitGloves_C");

	return Clss;
}


// Buff_HazardSuitGloves_C Buff_HazardSuitGloves.Default__Buff_HazardSuitGloves_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_HazardSuitGloves_C* ABuff_HazardSuitGloves_C::GetDefaultObj()
{
	static class ABuff_HazardSuitGloves_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_HazardSuitGloves_C*>(ABuff_HazardSuitGloves_C::StaticClass()->DefaultObject);

	return Default;
}

}


