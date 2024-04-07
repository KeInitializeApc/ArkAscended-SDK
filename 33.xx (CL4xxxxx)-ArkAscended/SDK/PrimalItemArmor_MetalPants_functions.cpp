#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_MetalPants.PrimalItemArmor_MetalPants_C
// (None)

class UClass* UPrimalItemArmor_MetalPants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_MetalPants_C");

	return Clss;
}


// PrimalItemArmor_MetalPants_C PrimalItemArmor_MetalPants.Default__PrimalItemArmor_MetalPants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_MetalPants_C* UPrimalItemArmor_MetalPants_C::GetDefaultObj()
{
	static class UPrimalItemArmor_MetalPants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_MetalPants_C*>(UPrimalItemArmor_MetalPants_C::StaticClass()->DefaultObject);

	return Default;
}

}


