#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Red_3_Gore.PrimalItemDye_Red_3_Gore_C
// (None)

class UClass* UPrimalItemDye_Red_3_Gore_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Red_3_Gore_C");

	return Clss;
}


// PrimalItemDye_Red_3_Gore_C PrimalItemDye_Red_3_Gore.Default__PrimalItemDye_Red_3_Gore_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Red_3_Gore_C* UPrimalItemDye_Red_3_Gore_C::GetDefaultObj()
{
	static class UPrimalItemDye_Red_3_Gore_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Red_3_Gore_C*>(UPrimalItemDye_Red_3_Gore_C::StaticClass()->DefaultObject);

	return Default;
}

}


