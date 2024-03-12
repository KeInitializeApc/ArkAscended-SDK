#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_TheHorn.PrimalItemConsumable_TheHorn_C
// (None)

class UClass* UPrimalItemConsumable_TheHorn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_TheHorn_C");

	return Clss;
}


// PrimalItemConsumable_TheHorn_C PrimalItemConsumable_TheHorn.Default__PrimalItemConsumable_TheHorn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_TheHorn_C* UPrimalItemConsumable_TheHorn_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_TheHorn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_TheHorn_C*>(UPrimalItemConsumable_TheHorn_C::StaticClass()->DefaultObject);

	return Default;
}

}


