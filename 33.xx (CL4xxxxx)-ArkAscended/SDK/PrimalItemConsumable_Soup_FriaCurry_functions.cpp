#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Soup_FriaCurry.PrimalItemConsumable_Soup_FriaCurry_C
// (None)

class UClass* UPrimalItemConsumable_Soup_FriaCurry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Soup_FriaCurry_C");

	return Clss;
}


// PrimalItemConsumable_Soup_FriaCurry_C PrimalItemConsumable_Soup_FriaCurry.Default__PrimalItemConsumable_Soup_FriaCurry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Soup_FriaCurry_C* UPrimalItemConsumable_Soup_FriaCurry_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Soup_FriaCurry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Soup_FriaCurry_C*>(UPrimalItemConsumable_Soup_FriaCurry_C::StaticClass()->DefaultObject);

	return Default;
}

}


