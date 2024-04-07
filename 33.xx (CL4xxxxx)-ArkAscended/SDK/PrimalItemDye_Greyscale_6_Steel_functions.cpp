#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Greyscale_6_Steel.PrimalItemDye_Greyscale_6_Steel_C
// (None)

class UClass* UPrimalItemDye_Greyscale_6_Steel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Greyscale_6_Steel_C");

	return Clss;
}


// PrimalItemDye_Greyscale_6_Steel_C PrimalItemDye_Greyscale_6_Steel.Default__PrimalItemDye_Greyscale_6_Steel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Greyscale_6_Steel_C* UPrimalItemDye_Greyscale_6_Steel_C::GetDefaultObj()
{
	static class UPrimalItemDye_Greyscale_6_Steel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Greyscale_6_Steel_C*>(UPrimalItemDye_Greyscale_6_Steel_C::StaticClass()->DefaultObject);

	return Default;
}

}


