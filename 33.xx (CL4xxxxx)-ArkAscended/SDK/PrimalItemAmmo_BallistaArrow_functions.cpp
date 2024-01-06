#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_BallistaArrow.PrimalItemAmmo_BallistaArrow_C
// (None)

class UClass* UPrimalItemAmmo_BallistaArrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_BallistaArrow_C");

	return Clss;
}


// PrimalItemAmmo_BallistaArrow_C PrimalItemAmmo_BallistaArrow.Default__PrimalItemAmmo_BallistaArrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_BallistaArrow_C* UPrimalItemAmmo_BallistaArrow_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_BallistaArrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_BallistaArrow_C*>(UPrimalItemAmmo_BallistaArrow_C::StaticClass()->DefaultObject);

	return Default;
}

}


