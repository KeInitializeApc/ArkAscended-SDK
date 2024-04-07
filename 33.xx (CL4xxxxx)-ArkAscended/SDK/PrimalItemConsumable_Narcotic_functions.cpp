#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Narcotic.PrimalItemConsumable_Narcotic_C
// (None)

class UClass* UPrimalItemConsumable_Narcotic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Narcotic_C");

	return Clss;
}


// PrimalItemConsumable_Narcotic_C PrimalItemConsumable_Narcotic.Default__PrimalItemConsumable_Narcotic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Narcotic_C* UPrimalItemConsumable_Narcotic_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Narcotic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Narcotic_C*>(UPrimalItemConsumable_Narcotic_C::StaticClass()->DefaultObject);

	return Default;
}

}


