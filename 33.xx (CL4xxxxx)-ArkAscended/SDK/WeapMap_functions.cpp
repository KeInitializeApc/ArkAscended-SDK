#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeapMap.WeapMap_C
// (Actor)

class UClass* AWeapMap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeapMap_C");

	return Clss;
}


// WeapMap_C WeapMap.Default__WeapMap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeapMap_C* AWeapMap_C::GetDefaultObj()
{
	static class AWeapMap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeapMap_C*>(AWeapMap_C::StaticClass()->DefaultObject);

	return Default;
}

}


