#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumableSeed.PrimalItemConsumableSeed_C
// (None)

class UClass* UPrimalItemConsumableSeed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumableSeed_C");

	return Clss;
}


// PrimalItemConsumableSeed_C PrimalItemConsumableSeed.Default__PrimalItemConsumableSeed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumableSeed_C* UPrimalItemConsumableSeed_C::GetDefaultObj()
{
	static class UPrimalItemConsumableSeed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumableSeed_C*>(UPrimalItemConsumableSeed_C::StaticClass()->DefaultObject);

	return Default;
}

}


