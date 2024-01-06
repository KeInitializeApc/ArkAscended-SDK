#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_MetalShield.PrimalItemArmor_MetalShield_C
// (None)

class UClass* UPrimalItemArmor_MetalShield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_MetalShield_C");

	return Clss;
}


// PrimalItemArmor_MetalShield_C PrimalItemArmor_MetalShield.Default__PrimalItemArmor_MetalShield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_MetalShield_C* UPrimalItemArmor_MetalShield_C::GetDefaultObj()
{
	static class UPrimalItemArmor_MetalShield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_MetalShield_C*>(UPrimalItemArmor_MetalShield_C::StaticClass()->DefaultObject);

	return Default;
}

}


