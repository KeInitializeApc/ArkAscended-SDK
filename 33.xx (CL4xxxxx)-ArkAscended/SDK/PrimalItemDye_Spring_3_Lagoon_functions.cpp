#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Spring_3_Lagoon.PrimalItemDye_Spring_3_Lagoon_C
// (None)

class UClass* UPrimalItemDye_Spring_3_Lagoon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Spring_3_Lagoon_C");

	return Clss;
}


// PrimalItemDye_Spring_3_Lagoon_C PrimalItemDye_Spring_3_Lagoon.Default__PrimalItemDye_Spring_3_Lagoon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Spring_3_Lagoon_C* UPrimalItemDye_Spring_3_Lagoon_C::GetDefaultObj()
{
	static class UPrimalItemDye_Spring_3_Lagoon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Spring_3_Lagoon_C*>(UPrimalItemDye_Spring_3_Lagoon_C::StaticClass()->DefaultObject);

	return Default;
}

}


