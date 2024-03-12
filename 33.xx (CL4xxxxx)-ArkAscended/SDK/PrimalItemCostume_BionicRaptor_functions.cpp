#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemCostume_BionicRaptor.PrimalItemCostume_BionicRaptor_C
// (None)

class UClass* UPrimalItemCostume_BionicRaptor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemCostume_BionicRaptor_C");

	return Clss;
}


// PrimalItemCostume_BionicRaptor_C PrimalItemCostume_BionicRaptor.Default__PrimalItemCostume_BionicRaptor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemCostume_BionicRaptor_C* UPrimalItemCostume_BionicRaptor_C::GetDefaultObj()
{
	static class UPrimalItemCostume_BionicRaptor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemCostume_BionicRaptor_C*>(UPrimalItemCostume_BionicRaptor_C::StaticClass()->DefaultObject);

	return Default;
}

}


