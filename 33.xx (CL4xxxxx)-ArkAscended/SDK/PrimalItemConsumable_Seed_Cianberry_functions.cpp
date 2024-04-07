#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Seed_Cianberry.PrimalItemConsumable_Seed_Cianberry_C
// (None)

class UClass* UPrimalItemConsumable_Seed_Cianberry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Seed_Cianberry_C");

	return Clss;
}


// PrimalItemConsumable_Seed_Cianberry_C PrimalItemConsumable_Seed_Cianberry.Default__PrimalItemConsumable_Seed_Cianberry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Seed_Cianberry_C* UPrimalItemConsumable_Seed_Cianberry_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Seed_Cianberry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Seed_Cianberry_C*>(UPrimalItemConsumable_Seed_Cianberry_C::StaticClass()->DefaultObject);

	return Default;
}

}


