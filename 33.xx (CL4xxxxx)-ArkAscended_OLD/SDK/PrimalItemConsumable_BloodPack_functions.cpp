#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_BloodPack.PrimalItemConsumable_BloodPack_C
// (None)

class UClass* UPrimalItemConsumable_BloodPack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_BloodPack_C");

	return Clss;
}


// PrimalItemConsumable_BloodPack_C PrimalItemConsumable_BloodPack.Default__PrimalItemConsumable_BloodPack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_BloodPack_C* UPrimalItemConsumable_BloodPack_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_BloodPack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_BloodPack_C*>(UPrimalItemConsumable_BloodPack_C::StaticClass()->DefaultObject);

	return Default;
}

}


