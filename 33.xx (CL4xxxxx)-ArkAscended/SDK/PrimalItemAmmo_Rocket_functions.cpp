#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_Rocket.PrimalItemAmmo_Rocket_C
// (None)

class UClass* UPrimalItemAmmo_Rocket_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_Rocket_C");

	return Clss;
}


// PrimalItemAmmo_Rocket_C PrimalItemAmmo_Rocket.Default__PrimalItemAmmo_Rocket_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_Rocket_C* UPrimalItemAmmo_Rocket_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_Rocket_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_Rocket_C*>(UPrimalItemAmmo_Rocket_C::StaticClass()->DefaultObject);

	return Default;
}

}


