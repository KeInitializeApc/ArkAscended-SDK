#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Yellow_5_Canary.PrimalItemDye_Yellow_5_Canary_C
// (None)

class UClass* UPrimalItemDye_Yellow_5_Canary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Yellow_5_Canary_C");

	return Clss;
}


// PrimalItemDye_Yellow_5_Canary_C PrimalItemDye_Yellow_5_Canary.Default__PrimalItemDye_Yellow_5_Canary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Yellow_5_Canary_C* UPrimalItemDye_Yellow_5_Canary_C::GetDefaultObj()
{
	static class UPrimalItemDye_Yellow_5_Canary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Yellow_5_Canary_C*>(UPrimalItemDye_Yellow_5_Canary_C::StaticClass()->DefaultObject);

	return Default;
}

}


