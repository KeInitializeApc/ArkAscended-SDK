#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_ClothGloves.PrimalItemArmor_ClothGloves_C
// (None)

class UClass* UPrimalItemArmor_ClothGloves_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_ClothGloves_C");

	return Clss;
}


// PrimalItemArmor_ClothGloves_C PrimalItemArmor_ClothGloves.Default__PrimalItemArmor_ClothGloves_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_ClothGloves_C* UPrimalItemArmor_ClothGloves_C::GetDefaultObj()
{
	static class UPrimalItemArmor_ClothGloves_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_ClothGloves_C*>(UPrimalItemArmor_ClothGloves_C::StaticClass()->DefaultObject);

	return Default;
}

}


