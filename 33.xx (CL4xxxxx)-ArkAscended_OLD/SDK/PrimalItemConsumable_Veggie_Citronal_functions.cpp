#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Veggie_Citronal.PrimalItemConsumable_Veggie_Citronal_C
// (None)

class UClass* UPrimalItemConsumable_Veggie_Citronal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Veggie_Citronal_C");

	return Clss;
}


// PrimalItemConsumable_Veggie_Citronal_C PrimalItemConsumable_Veggie_Citronal.Default__PrimalItemConsumable_Veggie_Citronal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Veggie_Citronal_C* UPrimalItemConsumable_Veggie_Citronal_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Veggie_Citronal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Veggie_Citronal_C*>(UPrimalItemConsumable_Veggie_Citronal_C::StaticClass()->DefaultObject);

	return Default;
}

}


