#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeapCompass.WeapCompass_C
// (Actor)

class UClass* AWeapCompass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeapCompass_C");

	return Clss;
}


// WeapCompass_C WeapCompass.Default__WeapCompass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeapCompass_C* AWeapCompass_C::GetDefaultObj()
{
	static class AWeapCompass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeapCompass_C*>(AWeapCompass_C::StaticClass()->DefaultObject);

	return Default;
}

}


