#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Seed_Stimberry.PrimalItemConsumable_Seed_Stimberry_C
// (None)

class UClass* UPrimalItemConsumable_Seed_Stimberry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Seed_Stimberry_C");

	return Clss;
}


// PrimalItemConsumable_Seed_Stimberry_C PrimalItemConsumable_Seed_Stimberry.Default__PrimalItemConsumable_Seed_Stimberry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Seed_Stimberry_C* UPrimalItemConsumable_Seed_Stimberry_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Seed_Stimberry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Seed_Stimberry_C*>(UPrimalItemConsumable_Seed_Stimberry_C::StaticClass()->DefaultObject);

	return Default;
}

}


