#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Misc_3.PrimalItemDye_Misc_3_C
// (None)

class UClass* UPrimalItemDye_Misc_3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Misc_3_C");

	return Clss;
}


// PrimalItemDye_Misc_3_C PrimalItemDye_Misc_3.Default__PrimalItemDye_Misc_3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Misc_3_C* UPrimalItemDye_Misc_3_C::GetDefaultObj()
{
	static class UPrimalItemDye_Misc_3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Misc_3_C*>(UPrimalItemDye_Misc_3_C::StaticClass()->DefaultObject);

	return Default;
}

}


