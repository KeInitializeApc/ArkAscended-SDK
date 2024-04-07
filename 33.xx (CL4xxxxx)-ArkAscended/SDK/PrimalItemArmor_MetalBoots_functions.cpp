#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_MetalBoots.PrimalItemArmor_MetalBoots_C
// (None)

class UClass* UPrimalItemArmor_MetalBoots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_MetalBoots_C");

	return Clss;
}


// PrimalItemArmor_MetalBoots_C PrimalItemArmor_MetalBoots.Default__PrimalItemArmor_MetalBoots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_MetalBoots_C* UPrimalItemArmor_MetalBoots_C::GetDefaultObj()
{
	static class UPrimalItemArmor_MetalBoots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_MetalBoots_C*>(UPrimalItemArmor_MetalBoots_C::StaticClass()->DefaultObject);

	return Default;
}

}


