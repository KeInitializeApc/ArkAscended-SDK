#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Drill_HarvestImpactEmitter_Wood.Drill_HarvestImpactEmitter_Wood_C
// (Actor)

class UClass* ADrill_HarvestImpactEmitter_Wood_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Drill_HarvestImpactEmitter_Wood_C");

	return Clss;
}


// Drill_HarvestImpactEmitter_Wood_C Drill_HarvestImpactEmitter_Wood.Default__Drill_HarvestImpactEmitter_Wood_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADrill_HarvestImpactEmitter_Wood_C* ADrill_HarvestImpactEmitter_Wood_C::GetDefaultObj()
{
	static class ADrill_HarvestImpactEmitter_Wood_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADrill_HarvestImpactEmitter_Wood_C*>(ADrill_HarvestImpactEmitter_Wood_C::StaticClass()->DefaultObject);

	return Default;
}

}


