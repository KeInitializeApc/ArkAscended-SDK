#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Greyscale_10_White.PrimalItemDye_Greyscale_10_White_C
// (None)

class UClass* UPrimalItemDye_Greyscale_10_White_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Greyscale_10_White_C");

	return Clss;
}


// PrimalItemDye_Greyscale_10_White_C PrimalItemDye_Greyscale_10_White.Default__PrimalItemDye_Greyscale_10_White_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Greyscale_10_White_C* UPrimalItemDye_Greyscale_10_White_C::GetDefaultObj()
{
	static class UPrimalItemDye_Greyscale_10_White_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Greyscale_10_White_C*>(UPrimalItemDye_Greyscale_10_White_C::StaticClass()->DefaultObject);

	return Default;
}

}


