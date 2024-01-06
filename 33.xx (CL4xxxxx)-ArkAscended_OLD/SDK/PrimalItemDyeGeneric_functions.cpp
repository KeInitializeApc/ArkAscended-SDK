#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDyeGeneric.PrimalItemDyeGeneric_C
// (None)

class UClass* UPrimalItemDyeGeneric_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDyeGeneric_C");

	return Clss;
}


// PrimalItemDyeGeneric_C PrimalItemDyeGeneric.Default__PrimalItemDyeGeneric_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDyeGeneric_C* UPrimalItemDyeGeneric_C::GetDefaultObj()
{
	static class UPrimalItemDyeGeneric_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDyeGeneric_C*>(UPrimalItemDyeGeneric_C::StaticClass()->DefaultObject);

	return Default;
}

}


