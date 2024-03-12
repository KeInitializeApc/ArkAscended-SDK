#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Magenta_4_Magenta.PrimalItemDye_Magenta_4_Magenta_C
// (None)

class UClass* UPrimalItemDye_Magenta_4_Magenta_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Magenta_4_Magenta_C");

	return Clss;
}


// PrimalItemDye_Magenta_4_Magenta_C PrimalItemDye_Magenta_4_Magenta.Default__PrimalItemDye_Magenta_4_Magenta_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Magenta_4_Magenta_C* UPrimalItemDye_Magenta_4_Magenta_C::GetDefaultObj()
{
	static class UPrimalItemDye_Magenta_4_Magenta_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Magenta_4_Magenta_C*>(UPrimalItemDye_Magenta_4_Magenta_C::StaticClass()->DefaultObject);

	return Default;
}

}


