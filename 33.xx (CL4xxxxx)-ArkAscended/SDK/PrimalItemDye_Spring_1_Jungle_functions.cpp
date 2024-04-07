#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Spring_1_Jungle.PrimalItemDye_Spring_1_Jungle_C
// (None)

class UClass* UPrimalItemDye_Spring_1_Jungle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Spring_1_Jungle_C");

	return Clss;
}


// PrimalItemDye_Spring_1_Jungle_C PrimalItemDye_Spring_1_Jungle.Default__PrimalItemDye_Spring_1_Jungle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Spring_1_Jungle_C* UPrimalItemDye_Spring_1_Jungle_C::GetDefaultObj()
{
	static class UPrimalItemDye_Spring_1_Jungle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Spring_1_Jungle_C*>(UPrimalItemDye_Spring_1_Jungle_C::StaticClass()->DefaultObject);

	return Default;
}

}


