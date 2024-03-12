#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_DesertClothGloves.PrimalItemArmor_DesertClothGloves_C
// (None)

class UClass* UPrimalItemArmor_DesertClothGloves_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_DesertClothGloves_C");

	return Clss;
}


// PrimalItemArmor_DesertClothGloves_C PrimalItemArmor_DesertClothGloves.Default__PrimalItemArmor_DesertClothGloves_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_DesertClothGloves_C* UPrimalItemArmor_DesertClothGloves_C::GetDefaultObj()
{
	static class UPrimalItemArmor_DesertClothGloves_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_DesertClothGloves_C*>(UPrimalItemArmor_DesertClothGloves_C::StaticClass()->DefaultObject);

	return Default;
}

}


