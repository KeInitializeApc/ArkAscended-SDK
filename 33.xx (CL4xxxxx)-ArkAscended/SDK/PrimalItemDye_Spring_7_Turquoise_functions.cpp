#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Spring_7_Turquoise.PrimalItemDye_Spring_7_Turquoise_C
// (None)

class UClass* UPrimalItemDye_Spring_7_Turquoise_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Spring_7_Turquoise_C");

	return Clss;
}


// PrimalItemDye_Spring_7_Turquoise_C PrimalItemDye_Spring_7_Turquoise.Default__PrimalItemDye_Spring_7_Turquoise_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Spring_7_Turquoise_C* UPrimalItemDye_Spring_7_Turquoise_C::GetDefaultObj()
{
	static class UPrimalItemDye_Spring_7_Turquoise_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Spring_7_Turquoise_C*>(UPrimalItemDye_Spring_7_Turquoise_C::StaticClass()->DefaultObject);

	return Default;
}

}


