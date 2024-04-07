#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemCostume_BionicStego.PrimalItemCostume_BionicStego_C
// (None)

class UClass* UPrimalItemCostume_BionicStego_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemCostume_BionicStego_C");

	return Clss;
}


// PrimalItemCostume_BionicStego_C PrimalItemCostume_BionicStego.Default__PrimalItemCostume_BionicStego_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemCostume_BionicStego_C* UPrimalItemCostume_BionicStego_C::GetDefaultObj()
{
	static class UPrimalItemCostume_BionicStego_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemCostume_BionicStego_C*>(UPrimalItemCostume_BionicStego_C::StaticClass()->DefaultObject);

	return Default;
}

}


