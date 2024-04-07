#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Seed_BaseBerry.PrimalItemConsumable_Seed_BaseBerry_C
// (None)

class UClass* UPrimalItemConsumable_Seed_BaseBerry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Seed_BaseBerry_C");

	return Clss;
}


// PrimalItemConsumable_Seed_BaseBerry_C PrimalItemConsumable_Seed_BaseBerry.Default__PrimalItemConsumable_Seed_BaseBerry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Seed_BaseBerry_C* UPrimalItemConsumable_Seed_BaseBerry_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Seed_BaseBerry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Seed_BaseBerry_C*>(UPrimalItemConsumable_Seed_BaseBerry_C::StaticClass()->DefaultObject);

	return Default;
}

}


