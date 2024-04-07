#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeapSword.WeapSword_C
// (Actor)

class UClass* AWeapSword_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeapSword_C");

	return Clss;
}


// WeapSword_C WeapSword.Default__WeapSword_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeapSword_C* AWeapSword_C::GetDefaultObj()
{
	static class AWeapSword_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeapSword_C*>(AWeapSword_C::StaticClass()->DefaultObject);

	return Default;
}

}


