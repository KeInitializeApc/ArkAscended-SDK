#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemCostume_BionicMosa.PrimalItemCostume_BionicMosa_C
// (None)

class UClass* UPrimalItemCostume_BionicMosa_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemCostume_BionicMosa_C");

	return Clss;
}


// PrimalItemCostume_BionicMosa_C PrimalItemCostume_BionicMosa.Default__PrimalItemCostume_BionicMosa_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemCostume_BionicMosa_C* UPrimalItemCostume_BionicMosa_C::GetDefaultObj()
{
	static class UPrimalItemCostume_BionicMosa_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemCostume_BionicMosa_C*>(UPrimalItemCostume_BionicMosa_C::StaticClass()->DefaultObject);

	return Default;
}

}


