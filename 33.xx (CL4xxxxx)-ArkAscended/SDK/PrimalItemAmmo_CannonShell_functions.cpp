#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_CannonShell.PrimalItemAmmo_CannonShell_C
// (None)

class UClass* UPrimalItemAmmo_CannonShell_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_CannonShell_C");

	return Clss;
}


// PrimalItemAmmo_CannonShell_C PrimalItemAmmo_CannonShell.Default__PrimalItemAmmo_CannonShell_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_CannonShell_C* UPrimalItemAmmo_CannonShell_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_CannonShell_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_CannonShell_C*>(UPrimalItemAmmo_CannonShell_C::StaticClass()->DefaultObject);

	return Default;
}

}


