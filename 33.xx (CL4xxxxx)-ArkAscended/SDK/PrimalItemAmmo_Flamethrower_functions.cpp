#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_Flamethrower.PrimalItemAmmo_Flamethrower_C
// (None)

class UClass* UPrimalItemAmmo_Flamethrower_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_Flamethrower_C");

	return Clss;
}


// PrimalItemAmmo_Flamethrower_C PrimalItemAmmo_Flamethrower.Default__PrimalItemAmmo_Flamethrower_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_Flamethrower_C* UPrimalItemAmmo_Flamethrower_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_Flamethrower_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_Flamethrower_C*>(UPrimalItemAmmo_Flamethrower_C::StaticClass()->DefaultObject);

	return Default;
}

}


