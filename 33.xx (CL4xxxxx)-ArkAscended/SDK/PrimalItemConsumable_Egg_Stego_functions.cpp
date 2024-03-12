#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Egg_Stego.PrimalItemConsumable_Egg_Stego_C
// (None)

class UClass* UPrimalItemConsumable_Egg_Stego_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Egg_Stego_C");

	return Clss;
}


// PrimalItemConsumable_Egg_Stego_C PrimalItemConsumable_Egg_Stego.Default__PrimalItemConsumable_Egg_Stego_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Egg_Stego_C* UPrimalItemConsumable_Egg_Stego_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Egg_Stego_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Egg_Stego_C*>(UPrimalItemConsumable_Egg_Stego_C::StaticClass()->DefaultObject);

	return Default;
}

}


