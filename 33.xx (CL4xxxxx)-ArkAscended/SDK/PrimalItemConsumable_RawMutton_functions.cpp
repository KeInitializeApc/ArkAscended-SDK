#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_RawMutton.PrimalItemConsumable_RawMutton_C
// (None)

class UClass* UPrimalItemConsumable_RawMutton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_RawMutton_C");

	return Clss;
}


// PrimalItemConsumable_RawMutton_C PrimalItemConsumable_RawMutton.Default__PrimalItemConsumable_RawMutton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_RawMutton_C* UPrimalItemConsumable_RawMutton_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_RawMutton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_RawMutton_C*>(UPrimalItemConsumable_RawMutton_C::StaticClass()->DefaultObject);

	return Default;
}

}


