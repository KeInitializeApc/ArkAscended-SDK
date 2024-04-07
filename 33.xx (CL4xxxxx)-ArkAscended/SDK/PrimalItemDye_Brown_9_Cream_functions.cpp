#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Brown_9_Cream.PrimalItemDye_Brown_9_Cream_C
// (None)

class UClass* UPrimalItemDye_Brown_9_Cream_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Brown_9_Cream_C");

	return Clss;
}


// PrimalItemDye_Brown_9_Cream_C PrimalItemDye_Brown_9_Cream.Default__PrimalItemDye_Brown_9_Cream_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Brown_9_Cream_C* UPrimalItemDye_Brown_9_Cream_C::GetDefaultObj()
{
	static class UPrimalItemDye_Brown_9_Cream_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Brown_9_Cream_C*>(UPrimalItemDye_Brown_9_Cream_C::StaticClass()->DefaultObject);

	return Default;
}

}


