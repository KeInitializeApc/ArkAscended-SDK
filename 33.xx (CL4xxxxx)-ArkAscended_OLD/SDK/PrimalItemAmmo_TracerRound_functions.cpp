#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_TracerRound.PrimalItemAmmo_TracerRound_C
// (None)

class UClass* UPrimalItemAmmo_TracerRound_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_TracerRound_C");

	return Clss;
}


// PrimalItemAmmo_TracerRound_C PrimalItemAmmo_TracerRound.Default__PrimalItemAmmo_TracerRound_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_TracerRound_C* UPrimalItemAmmo_TracerRound_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_TracerRound_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_TracerRound_C*>(UPrimalItemAmmo_TracerRound_C::StaticClass()->DefaultObject);

	return Default;
}

}


