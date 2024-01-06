#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_RawMeat.PrimalItemConsumable_RawMeat_C
// (None)

class UClass* UPrimalItemConsumable_RawMeat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_RawMeat_C");

	return Clss;
}


// PrimalItemConsumable_RawMeat_C PrimalItemConsumable_RawMeat.Default__PrimalItemConsumable_RawMeat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_RawMeat_C* UPrimalItemConsumable_RawMeat_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_RawMeat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_RawMeat_C*>(UPrimalItemConsumable_RawMeat_C::StaticClass()->DefaultObject);

	return Default;
}

}


