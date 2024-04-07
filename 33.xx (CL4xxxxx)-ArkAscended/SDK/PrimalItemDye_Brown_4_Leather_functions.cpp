#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Brown_4_Leather.PrimalItemDye_Brown_4_Leather_C
// (None)

class UClass* UPrimalItemDye_Brown_4_Leather_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Brown_4_Leather_C");

	return Clss;
}


// PrimalItemDye_Brown_4_Leather_C PrimalItemDye_Brown_4_Leather.Default__PrimalItemDye_Brown_4_Leather_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Brown_4_Leather_C* UPrimalItemDye_Brown_4_Leather_C::GetDefaultObj()
{
	static class UPrimalItemDye_Brown_4_Leather_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Brown_4_Leather_C*>(UPrimalItemDye_Brown_4_Leather_C::StaticClass()->DefaultObject);

	return Default;
}

}


