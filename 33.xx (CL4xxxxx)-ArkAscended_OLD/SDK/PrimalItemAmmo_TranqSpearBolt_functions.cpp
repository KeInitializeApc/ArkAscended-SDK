#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_TranqSpearBolt.PrimalItemAmmo_TranqSpearBolt_C
// (None)

class UClass* UPrimalItemAmmo_TranqSpearBolt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_TranqSpearBolt_C");

	return Clss;
}


// PrimalItemAmmo_TranqSpearBolt_C PrimalItemAmmo_TranqSpearBolt.Default__PrimalItemAmmo_TranqSpearBolt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_TranqSpearBolt_C* UPrimalItemAmmo_TranqSpearBolt_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_TranqSpearBolt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_TranqSpearBolt_C*>(UPrimalItemAmmo_TranqSpearBolt_C::StaticClass()->DefaultObject);

	return Default;
}

}


