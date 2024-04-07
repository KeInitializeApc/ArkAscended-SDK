#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_ClothPants.PrimalItemArmor_ClothPants_C
// (None)

class UClass* UPrimalItemArmor_ClothPants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_ClothPants_C");

	return Clss;
}


// PrimalItemArmor_ClothPants_C PrimalItemArmor_ClothPants.Default__PrimalItemArmor_ClothPants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_ClothPants_C* UPrimalItemArmor_ClothPants_C::GetDefaultObj()
{
	static class UPrimalItemArmor_ClothPants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_ClothPants_C*>(UPrimalItemArmor_ClothPants_C::StaticClass()->DefaultObject);

	return Default;
}

}


