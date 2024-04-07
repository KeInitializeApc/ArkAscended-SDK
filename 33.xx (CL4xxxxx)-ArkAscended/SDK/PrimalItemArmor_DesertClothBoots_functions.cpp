#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_DesertClothBoots.PrimalItemArmor_DesertClothBoots_C
// (None)

class UClass* UPrimalItemArmor_DesertClothBoots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_DesertClothBoots_C");

	return Clss;
}


// PrimalItemArmor_DesertClothBoots_C PrimalItemArmor_DesertClothBoots.Default__PrimalItemArmor_DesertClothBoots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_DesertClothBoots_C* UPrimalItemArmor_DesertClothBoots_C::GetDefaultObj()
{
	static class UPrimalItemArmor_DesertClothBoots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_DesertClothBoots_C*>(UPrimalItemArmor_DesertClothBoots_C::StaticClass()->DefaultObject);

	return Default;
}

}


