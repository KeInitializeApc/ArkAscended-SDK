#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Violet_5_Lilac.PrimalItemDye_Violet_5_Lilac_C
// (None)

class UClass* UPrimalItemDye_Violet_5_Lilac_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Violet_5_Lilac_C");

	return Clss;
}


// PrimalItemDye_Violet_5_Lilac_C PrimalItemDye_Violet_5_Lilac.Default__PrimalItemDye_Violet_5_Lilac_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Violet_5_Lilac_C* UPrimalItemDye_Violet_5_Lilac_C::GetDefaultObj()
{
	static class UPrimalItemDye_Violet_5_Lilac_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Violet_5_Lilac_C*>(UPrimalItemDye_Violet_5_Lilac_C::StaticClass()->DefaultObject);

	return Default;
}

}


