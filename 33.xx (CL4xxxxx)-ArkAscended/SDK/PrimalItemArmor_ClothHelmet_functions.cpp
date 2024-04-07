#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_ClothHelmet.PrimalItemArmor_ClothHelmet_C
// (None)

class UClass* UPrimalItemArmor_ClothHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_ClothHelmet_C");

	return Clss;
}


// PrimalItemArmor_ClothHelmet_C PrimalItemArmor_ClothHelmet.Default__PrimalItemArmor_ClothHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_ClothHelmet_C* UPrimalItemArmor_ClothHelmet_C::GetDefaultObj()
{
	static class UPrimalItemArmor_ClothHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_ClothHelmet_C*>(UPrimalItemArmor_ClothHelmet_C::StaticClass()->DefaultObject);

	return Default;
}

}


