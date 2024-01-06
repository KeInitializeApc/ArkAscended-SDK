#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_TranqDart.PrimalItemAmmo_TranqDart_C
// (None)

class UClass* UPrimalItemAmmo_TranqDart_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_TranqDart_C");

	return Clss;
}


// PrimalItemAmmo_TranqDart_C PrimalItemAmmo_TranqDart.Default__PrimalItemAmmo_TranqDart_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_TranqDart_C* UPrimalItemAmmo_TranqDart_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_TranqDart_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_TranqDart_C*>(UPrimalItemAmmo_TranqDart_C::StaticClass()->DefaultObject);

	return Default;
}

}


