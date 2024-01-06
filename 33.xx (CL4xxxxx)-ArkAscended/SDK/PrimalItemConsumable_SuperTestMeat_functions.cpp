#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_SuperTestMeat.PrimalItemConsumable_SuperTestMeat_C
// (None)

class UClass* UPrimalItemConsumable_SuperTestMeat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_SuperTestMeat_C");

	return Clss;
}


// PrimalItemConsumable_SuperTestMeat_C PrimalItemConsumable_SuperTestMeat.Default__PrimalItemConsumable_SuperTestMeat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_SuperTestMeat_C* UPrimalItemConsumable_SuperTestMeat_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_SuperTestMeat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_SuperTestMeat_C*>(UPrimalItemConsumable_SuperTestMeat_C::StaticClass()->DefaultObject);

	return Default;
}

}


