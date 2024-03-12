#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Seed_Azulberry.PrimalItemConsumable_Seed_Azulberry_C
// (None)

class UClass* UPrimalItemConsumable_Seed_Azulberry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Seed_Azulberry_C");

	return Clss;
}


// PrimalItemConsumable_Seed_Azulberry_C PrimalItemConsumable_Seed_Azulberry.Default__PrimalItemConsumable_Seed_Azulberry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Seed_Azulberry_C* UPrimalItemConsumable_Seed_Azulberry_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Seed_Azulberry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Seed_Azulberry_C*>(UPrimalItemConsumable_Seed_Azulberry_C::StaticClass()->DefaultObject);

	return Default;
}

}


