#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_ClothShirt.PrimalItemArmor_ClothShirt_C
// (None)

class UClass* UPrimalItemArmor_ClothShirt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_ClothShirt_C");

	return Clss;
}


// PrimalItemArmor_ClothShirt_C PrimalItemArmor_ClothShirt.Default__PrimalItemArmor_ClothShirt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_ClothShirt_C* UPrimalItemArmor_ClothShirt_C::GetDefaultObj()
{
	static class UPrimalItemArmor_ClothShirt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_ClothShirt_C*>(UPrimalItemArmor_ClothShirt_C::StaticClass()->DefaultObject);

	return Default;
}

}


