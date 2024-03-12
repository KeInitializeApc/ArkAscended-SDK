#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_DesertClothPants.PrimalItemArmor_DesertClothPants_C
// (None)

class UClass* UPrimalItemArmor_DesertClothPants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_DesertClothPants_C");

	return Clss;
}


// PrimalItemArmor_DesertClothPants_C PrimalItemArmor_DesertClothPants.Default__PrimalItemArmor_DesertClothPants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_DesertClothPants_C* UPrimalItemArmor_DesertClothPants_C::GetDefaultObj()
{
	static class UPrimalItemArmor_DesertClothPants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_DesertClothPants_C*>(UPrimalItemArmor_DesertClothPants_C::StaticClass()->DefaultObject);

	return Default;
}

}


