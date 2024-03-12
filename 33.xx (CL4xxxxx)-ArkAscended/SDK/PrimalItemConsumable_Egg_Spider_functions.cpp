#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Egg_Spider.PrimalItemConsumable_Egg_Spider_C
// (None)

class UClass* UPrimalItemConsumable_Egg_Spider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Egg_Spider_C");

	return Clss;
}


// PrimalItemConsumable_Egg_Spider_C PrimalItemConsumable_Egg_Spider.Default__PrimalItemConsumable_Egg_Spider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Egg_Spider_C* UPrimalItemConsumable_Egg_Spider_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Egg_Spider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Egg_Spider_C*>(UPrimalItemConsumable_Egg_Spider_C::StaticClass()->DefaultObject);

	return Default;
}

}


