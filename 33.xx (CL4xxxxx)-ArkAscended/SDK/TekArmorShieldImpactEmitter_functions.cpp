#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TekArmorShieldImpactEmitter.TekArmorShieldImpactEmitter_C
// (Actor)

class UClass* ATekArmorShieldImpactEmitter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TekArmorShieldImpactEmitter_C");

	return Clss;
}


// TekArmorShieldImpactEmitter_C TekArmorShieldImpactEmitter.Default__TekArmorShieldImpactEmitter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATekArmorShieldImpactEmitter_C* ATekArmorShieldImpactEmitter_C::GetDefaultObj()
{
	static class ATekArmorShieldImpactEmitter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATekArmorShieldImpactEmitter_C*>(ATekArmorShieldImpactEmitter_C::StaticClass()->DefaultObject);

	return Default;
}

}


