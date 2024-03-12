#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Seed_Amarberry.PrimalItemConsumable_Seed_Amarberry_C
// (None)

class UClass* UPrimalItemConsumable_Seed_Amarberry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Seed_Amarberry_C");

	return Clss;
}


// PrimalItemConsumable_Seed_Amarberry_C PrimalItemConsumable_Seed_Amarberry.Default__PrimalItemConsumable_Seed_Amarberry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Seed_Amarberry_C* UPrimalItemConsumable_Seed_Amarberry_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Seed_Amarberry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Seed_Amarberry_C*>(UPrimalItemConsumable_Seed_Amarberry_C::StaticClass()->DefaultObject);

	return Default;
}

}


