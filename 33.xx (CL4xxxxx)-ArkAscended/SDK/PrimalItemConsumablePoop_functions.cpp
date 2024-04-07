#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumablePoop.PrimalItemConsumablePoop_C
// (None)

class UClass* UPrimalItemConsumablePoop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumablePoop_C");

	return Clss;
}


// PrimalItemConsumablePoop_C PrimalItemConsumablePoop.Default__PrimalItemConsumablePoop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumablePoop_C* UPrimalItemConsumablePoop_C::GetDefaultObj()
{
	static class UPrimalItemConsumablePoop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumablePoop_C*>(UPrimalItemConsumablePoop_C::StaticClass()->DefaultObject);

	return Default;
}

}


