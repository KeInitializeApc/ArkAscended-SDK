#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_ClothBoots.PrimalItemArmor_ClothBoots_C
// (None)

class UClass* UPrimalItemArmor_ClothBoots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_ClothBoots_C");

	return Clss;
}


// PrimalItemArmor_ClothBoots_C PrimalItemArmor_ClothBoots.Default__PrimalItemArmor_ClothBoots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_ClothBoots_C* UPrimalItemArmor_ClothBoots_C::GetDefaultObj()
{
	static class UPrimalItemArmor_ClothBoots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_ClothBoots_C*>(UPrimalItemArmor_ClothBoots_C::StaticClass()->DefaultObject);

	return Default;
}

}


