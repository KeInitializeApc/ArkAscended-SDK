#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Yellow_1_Drab.PrimalItemDye_Yellow_1_Drab_C
// (None)

class UClass* UPrimalItemDye_Yellow_1_Drab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Yellow_1_Drab_C");

	return Clss;
}


// PrimalItemDye_Yellow_1_Drab_C PrimalItemDye_Yellow_1_Drab.Default__PrimalItemDye_Yellow_1_Drab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Yellow_1_Drab_C* UPrimalItemDye_Yellow_1_Drab_C::GetDefaultObj()
{
	static class UPrimalItemDye_Yellow_1_Drab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Yellow_1_Drab_C*>(UPrimalItemDye_Yellow_1_Drab_C::StaticClass()->DefaultObject);

	return Default;
}

}


