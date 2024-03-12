#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumableBuff_Parachute.PrimalItemConsumableBuff_Parachute_C
// (None)

class UClass* UPrimalItemConsumableBuff_Parachute_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumableBuff_Parachute_C");

	return Clss;
}


// PrimalItemConsumableBuff_Parachute_C PrimalItemConsumableBuff_Parachute.Default__PrimalItemConsumableBuff_Parachute_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumableBuff_Parachute_C* UPrimalItemConsumableBuff_Parachute_C::GetDefaultObj()
{
	static class UPrimalItemConsumableBuff_Parachute_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumableBuff_Parachute_C*>(UPrimalItemConsumableBuff_Parachute_C::StaticClass()->DefaultObject);

	return Default;
}

}


