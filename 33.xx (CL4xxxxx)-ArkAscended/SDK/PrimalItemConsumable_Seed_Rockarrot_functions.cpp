#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Seed_Rockarrot.PrimalItemConsumable_Seed_Rockarrot_C
// (None)

class UClass* UPrimalItemConsumable_Seed_Rockarrot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Seed_Rockarrot_C");

	return Clss;
}


// PrimalItemConsumable_Seed_Rockarrot_C PrimalItemConsumable_Seed_Rockarrot.Default__PrimalItemConsumable_Seed_Rockarrot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Seed_Rockarrot_C* UPrimalItemConsumable_Seed_Rockarrot_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Seed_Rockarrot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Seed_Rockarrot_C*>(UPrimalItemConsumable_Seed_Rockarrot_C::StaticClass()->DefaultObject);

	return Default;
}

}


