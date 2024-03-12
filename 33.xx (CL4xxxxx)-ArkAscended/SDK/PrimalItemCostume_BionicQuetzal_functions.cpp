#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemCostume_BionicQuetzal.PrimalItemCostume_BionicQuetzal_C
// (None)

class UClass* UPrimalItemCostume_BionicQuetzal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemCostume_BionicQuetzal_C");

	return Clss;
}


// PrimalItemCostume_BionicQuetzal_C PrimalItemCostume_BionicQuetzal.Default__PrimalItemCostume_BionicQuetzal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemCostume_BionicQuetzal_C* UPrimalItemCostume_BionicQuetzal_C::GetDefaultObj()
{
	static class UPrimalItemCostume_BionicQuetzal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemCostume_BionicQuetzal_C*>(UPrimalItemCostume_BionicQuetzal_C::StaticClass()->DefaultObject);

	return Default;
}

}


