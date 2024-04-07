#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_Boulder_Fire.PrimalItemAmmo_Boulder_Fire_C
// (None)

class UClass* UPrimalItemAmmo_Boulder_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_Boulder_Fire_C");

	return Clss;
}


// PrimalItemAmmo_Boulder_Fire_C PrimalItemAmmo_Boulder_Fire.Default__PrimalItemAmmo_Boulder_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_Boulder_Fire_C* UPrimalItemAmmo_Boulder_Fire_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_Boulder_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_Boulder_Fire_C*>(UPrimalItemAmmo_Boulder_Fire_C::StaticClass()->DefaultObject);

	return Default;
}

}


