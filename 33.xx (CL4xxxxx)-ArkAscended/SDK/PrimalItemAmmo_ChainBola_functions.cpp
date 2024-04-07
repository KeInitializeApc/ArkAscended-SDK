#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_ChainBola.PrimalItemAmmo_ChainBola_C
// (None)

class UClass* UPrimalItemAmmo_ChainBola_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_ChainBola_C");

	return Clss;
}


// PrimalItemAmmo_ChainBola_C PrimalItemAmmo_ChainBola.Default__PrimalItemAmmo_ChainBola_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_ChainBola_C* UPrimalItemAmmo_ChainBola_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_ChainBola_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_ChainBola_C*>(UPrimalItemAmmo_ChainBola_C::StaticClass()->DefaultObject);

	return Default;
}

}


