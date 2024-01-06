#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_CactusSap.PrimalItemConsumable_CactusSap_C
// (None)

class UClass* UPrimalItemConsumable_CactusSap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_CactusSap_C");

	return Clss;
}


// PrimalItemConsumable_CactusSap_C PrimalItemConsumable_CactusSap.Default__PrimalItemConsumable_CactusSap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_CactusSap_C* UPrimalItemConsumable_CactusSap_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_CactusSap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_CactusSap_C*>(UPrimalItemConsumable_CactusSap_C::StaticClass()->DefaultObject);

	return Default;
}

}


