#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_MetalGloves.PrimalItemArmor_MetalGloves_C
// (None)

class UClass* UPrimalItemArmor_MetalGloves_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_MetalGloves_C");

	return Clss;
}


// PrimalItemArmor_MetalGloves_C PrimalItemArmor_MetalGloves.Default__PrimalItemArmor_MetalGloves_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_MetalGloves_C* UPrimalItemArmor_MetalGloves_C::GetDefaultObj()
{
	static class UPrimalItemArmor_MetalGloves_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_MetalGloves_C*>(UPrimalItemArmor_MetalGloves_C::StaticClass()->DefaultObject);

	return Default;
}

}


