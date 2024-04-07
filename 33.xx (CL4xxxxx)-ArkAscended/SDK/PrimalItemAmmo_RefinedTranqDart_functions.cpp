#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_RefinedTranqDart.PrimalItemAmmo_RefinedTranqDart_C
// (None)

class UClass* UPrimalItemAmmo_RefinedTranqDart_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_RefinedTranqDart_C");

	return Clss;
}


// PrimalItemAmmo_RefinedTranqDart_C PrimalItemAmmo_RefinedTranqDart.Default__PrimalItemAmmo_RefinedTranqDart_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_RefinedTranqDart_C* UPrimalItemAmmo_RefinedTranqDart_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_RefinedTranqDart_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_RefinedTranqDart_C*>(UPrimalItemAmmo_RefinedTranqDart_C::StaticClass()->DefaultObject);

	return Default;
}

}


