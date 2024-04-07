#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemCostume_BionicTrike.PrimalItemCostume_BionicTrike_C
// (None)

class UClass* UPrimalItemCostume_BionicTrike_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemCostume_BionicTrike_C");

	return Clss;
}


// PrimalItemCostume_BionicTrike_C PrimalItemCostume_BionicTrike.Default__PrimalItemCostume_BionicTrike_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemCostume_BionicTrike_C* UPrimalItemCostume_BionicTrike_C::GetDefaultObj()
{
	static class UPrimalItemCostume_BionicTrike_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemCostume_BionicTrike_C*>(UPrimalItemCostume_BionicTrike_C::StaticClass()->DefaultObject);

	return Default;
}

}


