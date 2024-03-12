#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemCostume_BionicParasaur.PrimalItemCostume_BionicParasaur_C
// (None)

class UClass* UPrimalItemCostume_BionicParasaur_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemCostume_BionicParasaur_C");

	return Clss;
}


// PrimalItemCostume_BionicParasaur_C PrimalItemCostume_BionicParasaur.Default__PrimalItemCostume_BionicParasaur_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemCostume_BionicParasaur_C* UPrimalItemCostume_BionicParasaur_C::GetDefaultObj()
{
	static class UPrimalItemCostume_BionicParasaur_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemCostume_BionicParasaur_C*>(UPrimalItemCostume_BionicParasaur_C::StaticClass()->DefaultObject);

	return Default;
}

}


