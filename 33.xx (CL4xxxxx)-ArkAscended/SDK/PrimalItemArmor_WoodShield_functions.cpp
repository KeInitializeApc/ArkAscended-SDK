#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_WoodShield.PrimalItemArmor_WoodShield_C
// (None)

class UClass* UPrimalItemArmor_WoodShield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_WoodShield_C");

	return Clss;
}


// PrimalItemArmor_WoodShield_C PrimalItemArmor_WoodShield.Default__PrimalItemArmor_WoodShield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_WoodShield_C* UPrimalItemArmor_WoodShield_C::GetDefaultObj()
{
	static class UPrimalItemArmor_WoodShield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_WoodShield_C*>(UPrimalItemArmor_WoodShield_C::StaticClass()->DefaultObject);

	return Default;
}

}


