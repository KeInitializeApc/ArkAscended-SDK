#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_RocketPod.PrimalItemAmmo_RocketPod_C
// (None)

class UClass* UPrimalItemAmmo_RocketPod_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_RocketPod_C");

	return Clss;
}


// PrimalItemAmmo_RocketPod_C PrimalItemAmmo_RocketPod.Default__PrimalItemAmmo_RocketPod_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_RocketPod_C* UPrimalItemAmmo_RocketPod_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_RocketPod_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_RocketPod_C*>(UPrimalItemAmmo_RocketPod_C::StaticClass()->DefaultObject);

	return Default;
}

}


