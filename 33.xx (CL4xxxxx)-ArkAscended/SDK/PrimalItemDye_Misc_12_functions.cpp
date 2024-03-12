#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Misc_12.PrimalItemDye_Misc_12_C
// (None)

class UClass* UPrimalItemDye_Misc_12_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Misc_12_C");

	return Clss;
}


// PrimalItemDye_Misc_12_C PrimalItemDye_Misc_12.Default__PrimalItemDye_Misc_12_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Misc_12_C* UPrimalItemDye_Misc_12_C::GetDefaultObj()
{
	static class UPrimalItemDye_Misc_12_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Misc_12_C*>(UPrimalItemDye_Misc_12_C::StaticClass()->DefaultObject);

	return Default;
}

}


