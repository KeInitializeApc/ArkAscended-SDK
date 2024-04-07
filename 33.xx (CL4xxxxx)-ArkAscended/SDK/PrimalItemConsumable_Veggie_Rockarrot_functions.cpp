#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Veggie_Rockarrot.PrimalItemConsumable_Veggie_Rockarrot_C
// (None)

class UClass* UPrimalItemConsumable_Veggie_Rockarrot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Veggie_Rockarrot_C");

	return Clss;
}


// PrimalItemConsumable_Veggie_Rockarrot_C PrimalItemConsumable_Veggie_Rockarrot.Default__PrimalItemConsumable_Veggie_Rockarrot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Veggie_Rockarrot_C* UPrimalItemConsumable_Veggie_Rockarrot_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Veggie_Rockarrot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Veggie_Rockarrot_C*>(UPrimalItemConsumable_Veggie_Rockarrot_C::StaticClass()->DefaultObject);

	return Default;
}

}


