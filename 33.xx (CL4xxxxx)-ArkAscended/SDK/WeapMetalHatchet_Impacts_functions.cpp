#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeapMetalHatchet_Impacts.WeapMetalHatchet_Impacts_C
// (Actor)

class UClass* AWeapMetalHatchet_Impacts_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeapMetalHatchet_Impacts_C");

	return Clss;
}


// WeapMetalHatchet_Impacts_C WeapMetalHatchet_Impacts.Default__WeapMetalHatchet_Impacts_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeapMetalHatchet_Impacts_C* AWeapMetalHatchet_Impacts_C::GetDefaultObj()
{
	static class AWeapMetalHatchet_Impacts_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeapMetalHatchet_Impacts_C*>(AWeapMetalHatchet_Impacts_C::StaticClass()->DefaultObject);

	return Default;
}

}


