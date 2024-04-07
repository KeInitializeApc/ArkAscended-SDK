#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_DinoPoopLarge.PrimalItemConsumable_DinoPoopLarge_C
// (None)

class UClass* UPrimalItemConsumable_DinoPoopLarge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_DinoPoopLarge_C");

	return Clss;
}


// PrimalItemConsumable_DinoPoopLarge_C PrimalItemConsumable_DinoPoopLarge.Default__PrimalItemConsumable_DinoPoopLarge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_DinoPoopLarge_C* UPrimalItemConsumable_DinoPoopLarge_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_DinoPoopLarge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_DinoPoopLarge_C*>(UPrimalItemConsumable_DinoPoopLarge_C::StaticClass()->DefaultObject);

	return Default;
}

}


