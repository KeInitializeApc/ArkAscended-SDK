#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_MetalHelmet.PrimalItemArmor_MetalHelmet_C
// (None)

class UClass* UPrimalItemArmor_MetalHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_MetalHelmet_C");

	return Clss;
}


// PrimalItemArmor_MetalHelmet_C PrimalItemArmor_MetalHelmet.Default__PrimalItemArmor_MetalHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_MetalHelmet_C* UPrimalItemArmor_MetalHelmet_C::GetDefaultObj()
{
	static class UPrimalItemArmor_MetalHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_MetalHelmet_C*>(UPrimalItemArmor_MetalHelmet_C::StaticClass()->DefaultObject);

	return Default;
}

}


