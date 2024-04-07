#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_DesertClothShirt.PrimalItemArmor_DesertClothShirt_C
// (None)

class UClass* UPrimalItemArmor_DesertClothShirt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_DesertClothShirt_C");

	return Clss;
}


// PrimalItemArmor_DesertClothShirt_C PrimalItemArmor_DesertClothShirt.Default__PrimalItemArmor_DesertClothShirt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_DesertClothShirt_C* UPrimalItemArmor_DesertClothShirt_C::GetDefaultObj()
{
	static class UPrimalItemArmor_DesertClothShirt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_DesertClothShirt_C*>(UPrimalItemArmor_DesertClothShirt_C::StaticClass()->DefaultObject);

	return Default;
}

}


