#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Violet_6_Lavender.PrimalItemDye_Violet_6_Lavender_C
// (None)

class UClass* UPrimalItemDye_Violet_6_Lavender_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Violet_6_Lavender_C");

	return Clss;
}


// PrimalItemDye_Violet_6_Lavender_C PrimalItemDye_Violet_6_Lavender.Default__PrimalItemDye_Violet_6_Lavender_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Violet_6_Lavender_C* UPrimalItemDye_Violet_6_Lavender_C::GetDefaultObj()
{
	static class UPrimalItemDye_Violet_6_Lavender_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Violet_6_Lavender_C*>(UPrimalItemDye_Violet_6_Lavender_C::StaticClass()->DefaultObject);

	return Default;
}

}


