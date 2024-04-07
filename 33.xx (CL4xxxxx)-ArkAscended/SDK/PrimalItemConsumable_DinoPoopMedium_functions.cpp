#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_DinoPoopMedium.PrimalItemConsumable_DinoPoopMedium_C
// (None)

class UClass* UPrimalItemConsumable_DinoPoopMedium_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_DinoPoopMedium_C");

	return Clss;
}


// PrimalItemConsumable_DinoPoopMedium_C PrimalItemConsumable_DinoPoopMedium.Default__PrimalItemConsumable_DinoPoopMedium_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_DinoPoopMedium_C* UPrimalItemConsumable_DinoPoopMedium_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_DinoPoopMedium_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_DinoPoopMedium_C*>(UPrimalItemConsumable_DinoPoopMedium_C::StaticClass()->DefaultObject);

	return Default;
}

}


