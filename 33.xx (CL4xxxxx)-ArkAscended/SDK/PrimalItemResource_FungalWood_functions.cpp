#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_FungalWood.PrimalItemResource_FungalWood_C
// (None)

class UClass* UPrimalItemResource_FungalWood_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_FungalWood_C");

	return Clss;
}


// PrimalItemResource_FungalWood_C PrimalItemResource_FungalWood.Default__PrimalItemResource_FungalWood_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_FungalWood_C* UPrimalItemResource_FungalWood_C::GetDefaultObj()
{
	static class UPrimalItemResource_FungalWood_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_FungalWood_C*>(UPrimalItemResource_FungalWood_C::StaticClass()->DefaultObject);

	return Default;
}

}


