#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumableGeneric.PrimalItemConsumableGeneric_C
// (None)

class UClass* UPrimalItemConsumableGeneric_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumableGeneric_C");

	return Clss;
}


// PrimalItemConsumableGeneric_C PrimalItemConsumableGeneric.Default__PrimalItemConsumableGeneric_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumableGeneric_C* UPrimalItemConsumableGeneric_C::GetDefaultObj()
{
	static class UPrimalItemConsumableGeneric_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumableGeneric_C*>(UPrimalItemConsumableGeneric_C::StaticClass()->DefaultObject);

	return Default;
}

}


