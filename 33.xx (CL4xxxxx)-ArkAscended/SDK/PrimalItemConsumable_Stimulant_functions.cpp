#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Stimulant.PrimalItemConsumable_Stimulant_C
// (None)

class UClass* UPrimalItemConsumable_Stimulant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Stimulant_C");

	return Clss;
}


// PrimalItemConsumable_Stimulant_C PrimalItemConsumable_Stimulant.Default__PrimalItemConsumable_Stimulant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Stimulant_C* UPrimalItemConsumable_Stimulant_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Stimulant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Stimulant_C*>(UPrimalItemConsumable_Stimulant_C::StaticClass()->DefaultObject);

	return Default;
}

}


