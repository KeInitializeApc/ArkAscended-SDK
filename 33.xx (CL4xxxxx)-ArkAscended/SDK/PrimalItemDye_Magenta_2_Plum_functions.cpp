#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Magenta_2_Plum.PrimalItemDye_Magenta_2_Plum_C
// (None)

class UClass* UPrimalItemDye_Magenta_2_Plum_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Magenta_2_Plum_C");

	return Clss;
}


// PrimalItemDye_Magenta_2_Plum_C PrimalItemDye_Magenta_2_Plum.Default__PrimalItemDye_Magenta_2_Plum_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Magenta_2_Plum_C* UPrimalItemDye_Magenta_2_Plum_C::GetDefaultObj()
{
	static class UPrimalItemDye_Magenta_2_Plum_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Magenta_2_Plum_C*>(UPrimalItemDye_Magenta_2_Plum_C::StaticClass()->DefaultObject);

	return Default;
}

}


