#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_FishBasket.PrimalItemStructure_FishBasket_C
// (None)

class UClass* UPrimalItemStructure_FishBasket_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_FishBasket_C");

	return Clss;
}


// PrimalItemStructure_FishBasket_C PrimalItemStructure_FishBasket.Default__PrimalItemStructure_FishBasket_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_FishBasket_C* UPrimalItemStructure_FishBasket_C::GetDefaultObj()
{
	static class UPrimalItemStructure_FishBasket_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_FishBasket_C*>(UPrimalItemStructure_FishBasket_C::StaticClass()->DefaultObject);

	return Default;
}

}


