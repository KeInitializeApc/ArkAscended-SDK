#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Egg_Hesperonis.PrimalItemConsumable_Egg_Hesperonis_C
// (None)

class UClass* UPrimalItemConsumable_Egg_Hesperonis_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Egg_Hesperonis_C");

	return Clss;
}


// PrimalItemConsumable_Egg_Hesperonis_C PrimalItemConsumable_Egg_Hesperonis.Default__PrimalItemConsumable_Egg_Hesperonis_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Egg_Hesperonis_C* UPrimalItemConsumable_Egg_Hesperonis_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Egg_Hesperonis_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Egg_Hesperonis_C*>(UPrimalItemConsumable_Egg_Hesperonis_C::StaticClass()->DefaultObject);

	return Default;
}

}


