#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_HumanPoop.PrimalItemConsumable_HumanPoop_C
// (None)

class UClass* UPrimalItemConsumable_HumanPoop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_HumanPoop_C");

	return Clss;
}


// PrimalItemConsumable_HumanPoop_C PrimalItemConsumable_HumanPoop.Default__PrimalItemConsumable_HumanPoop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_HumanPoop_C* UPrimalItemConsumable_HumanPoop_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_HumanPoop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_HumanPoop_C*>(UPrimalItemConsumable_HumanPoop_C::StaticClass()->DefaultObject);

	return Default;
}

}


