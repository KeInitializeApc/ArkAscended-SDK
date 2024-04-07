#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Fertilizer_Compost.PrimalItemConsumable_Fertilizer_Compost_C
// (None)

class UClass* UPrimalItemConsumable_Fertilizer_Compost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Fertilizer_Compost_C");

	return Clss;
}


// PrimalItemConsumable_Fertilizer_Compost_C PrimalItemConsumable_Fertilizer_Compost.Default__PrimalItemConsumable_Fertilizer_Compost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Fertilizer_Compost_C* UPrimalItemConsumable_Fertilizer_Compost_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Fertilizer_Compost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Fertilizer_Compost_C*>(UPrimalItemConsumable_Fertilizer_Compost_C::StaticClass()->DefaultObject);

	return Default;
}

}


