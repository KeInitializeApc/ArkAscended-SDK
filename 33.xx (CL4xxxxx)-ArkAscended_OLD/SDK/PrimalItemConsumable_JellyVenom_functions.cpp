#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_JellyVenom.PrimalItemConsumable_JellyVenom_C
// (None)

class UClass* UPrimalItemConsumable_JellyVenom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_JellyVenom_C");

	return Clss;
}


// PrimalItemConsumable_JellyVenom_C PrimalItemConsumable_JellyVenom.Default__PrimalItemConsumable_JellyVenom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_JellyVenom_C* UPrimalItemConsumable_JellyVenom_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_JellyVenom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_JellyVenom_C*>(UPrimalItemConsumable_JellyVenom_C::StaticClass()->DefaultObject);

	return Default;
}

}


