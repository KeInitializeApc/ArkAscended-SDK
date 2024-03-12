#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_MetalShirt.PrimalItemArmor_MetalShirt_C
// (None)

class UClass* UPrimalItemArmor_MetalShirt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_MetalShirt_C");

	return Clss;
}


// PrimalItemArmor_MetalShirt_C PrimalItemArmor_MetalShirt.Default__PrimalItemArmor_MetalShirt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_MetalShirt_C* UPrimalItemArmor_MetalShirt_C::GetDefaultObj()
{
	static class UPrimalItemArmor_MetalShirt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_MetalShirt_C*>(UPrimalItemArmor_MetalShirt_C::StaticClass()->DefaultObject);

	return Default;
}

}


