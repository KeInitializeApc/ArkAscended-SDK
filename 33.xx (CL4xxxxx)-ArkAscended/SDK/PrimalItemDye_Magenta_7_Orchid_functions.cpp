#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Magenta_7_Orchid.PrimalItemDye_Magenta_7_Orchid_C
// (None)

class UClass* UPrimalItemDye_Magenta_7_Orchid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Magenta_7_Orchid_C");

	return Clss;
}


// PrimalItemDye_Magenta_7_Orchid_C PrimalItemDye_Magenta_7_Orchid.Default__PrimalItemDye_Magenta_7_Orchid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Magenta_7_Orchid_C* UPrimalItemDye_Magenta_7_Orchid_C::GetDefaultObj()
{
	static class UPrimalItemDye_Magenta_7_Orchid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Magenta_7_Orchid_C*>(UPrimalItemDye_Magenta_7_Orchid_C::StaticClass()->DefaultObject);

	return Default;
}

}


