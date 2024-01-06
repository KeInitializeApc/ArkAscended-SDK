#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeapChainsaw_Impacts.WeapChainsaw_Impacts_C
// (Actor)

class UClass* AWeapChainsaw_Impacts_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeapChainsaw_Impacts_C");

	return Clss;
}


// WeapChainsaw_Impacts_C WeapChainsaw_Impacts.Default__WeapChainsaw_Impacts_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeapChainsaw_Impacts_C* AWeapChainsaw_Impacts_C::GetDefaultObj()
{
	static class AWeapChainsaw_Impacts_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeapChainsaw_Impacts_C*>(AWeapChainsaw_Impacts_C::StaticClass()->DefaultObject);

	return Default;
}

}


