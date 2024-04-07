#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_HealSoup.PrimalItemConsumable_HealSoup_C
// (None)

class UClass* UPrimalItemConsumable_HealSoup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_HealSoup_C");

	return Clss;
}


// PrimalItemConsumable_HealSoup_C PrimalItemConsumable_HealSoup.Default__PrimalItemConsumable_HealSoup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_HealSoup_C* UPrimalItemConsumable_HealSoup_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_HealSoup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_HealSoup_C*>(UPrimalItemConsumable_HealSoup_C::StaticClass()->DefaultObject);

	return Default;
}

}


