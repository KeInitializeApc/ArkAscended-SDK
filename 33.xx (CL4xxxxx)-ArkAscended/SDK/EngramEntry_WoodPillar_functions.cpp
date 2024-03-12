#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_WoodPillar.EngramEntry_WoodPillar_C
// (None)

class UClass* UEngramEntry_WoodPillar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_WoodPillar_C");

	return Clss;
}


// EngramEntry_WoodPillar_C EngramEntry_WoodPillar.Default__EngramEntry_WoodPillar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_WoodPillar_C* UEngramEntry_WoodPillar_C::GetDefaultObj()
{
	static class UEngramEntry_WoodPillar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_WoodPillar_C*>(UEngramEntry_WoodPillar_C::StaticClass()->DefaultObject);

	return Default;
}

}


