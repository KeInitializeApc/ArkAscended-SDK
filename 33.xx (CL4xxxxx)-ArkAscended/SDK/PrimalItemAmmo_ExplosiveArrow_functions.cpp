#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_ExplosiveArrow.PrimalItemAmmo_ExplosiveArrow_C
// (None)

class UClass* UPrimalItemAmmo_ExplosiveArrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_ExplosiveArrow_C");

	return Clss;
}


// PrimalItemAmmo_ExplosiveArrow_C PrimalItemAmmo_ExplosiveArrow.Default__PrimalItemAmmo_ExplosiveArrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_ExplosiveArrow_C* UPrimalItemAmmo_ExplosiveArrow_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_ExplosiveArrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_ExplosiveArrow_C*>(UPrimalItemAmmo_ExplosiveArrow_C::StaticClass()->DefaultObject);

	return Default;
}

}


