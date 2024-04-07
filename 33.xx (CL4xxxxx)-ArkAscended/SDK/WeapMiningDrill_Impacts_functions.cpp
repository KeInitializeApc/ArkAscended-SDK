#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeapMiningDrill_Impacts.WeapMiningDrill_Impacts_C
// (Actor)

class UClass* AWeapMiningDrill_Impacts_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeapMiningDrill_Impacts_C");

	return Clss;
}


// WeapMiningDrill_Impacts_C WeapMiningDrill_Impacts.Default__WeapMiningDrill_Impacts_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeapMiningDrill_Impacts_C* AWeapMiningDrill_Impacts_C::GetDefaultObj()
{
	static class AWeapMiningDrill_Impacts_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeapMiningDrill_Impacts_C*>(AWeapMiningDrill_Impacts_C::StaticClass()->DefaultObject);

	return Default;
}

}


