#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Red_2_Scab.PrimalItemDye_Red_2_Scab_C
// (None)

class UClass* UPrimalItemDye_Red_2_Scab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Red_2_Scab_C");

	return Clss;
}


// PrimalItemDye_Red_2_Scab_C PrimalItemDye_Red_2_Scab.Default__PrimalItemDye_Red_2_Scab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Red_2_Scab_C* UPrimalItemDye_Red_2_Scab_C::GetDefaultObj()
{
	static class UPrimalItemDye_Red_2_Scab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Red_2_Scab_C*>(UPrimalItemDye_Red_2_Scab_C::StaticClass()->DefaultObject);

	return Default;
}

}


