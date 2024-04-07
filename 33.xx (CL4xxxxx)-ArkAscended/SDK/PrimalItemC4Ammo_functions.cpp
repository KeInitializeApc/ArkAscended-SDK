#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemC4Ammo.PrimalItemC4Ammo_C
// (None)

class UClass* UPrimalItemC4Ammo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemC4Ammo_C");

	return Clss;
}


// PrimalItemC4Ammo_C PrimalItemC4Ammo.Default__PrimalItemC4Ammo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemC4Ammo_C* UPrimalItemC4Ammo_C::GetDefaultObj()
{
	static class UPrimalItemC4Ammo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemC4Ammo_C*>(UPrimalItemC4Ammo_C::StaticClass()->DefaultObject);

	return Default;
}

}


