#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_ArrowFlame.PrimalItemAmmo_ArrowFlame_C
// (None)

class UClass* UPrimalItemAmmo_ArrowFlame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_ArrowFlame_C");

	return Clss;
}


// PrimalItemAmmo_ArrowFlame_C PrimalItemAmmo_ArrowFlame.Default__PrimalItemAmmo_ArrowFlame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_ArrowFlame_C* UPrimalItemAmmo_ArrowFlame_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_ArrowFlame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_ArrowFlame_C*>(UPrimalItemAmmo_ArrowFlame_C::StaticClass()->DefaultObject);

	return Default;
}

}


