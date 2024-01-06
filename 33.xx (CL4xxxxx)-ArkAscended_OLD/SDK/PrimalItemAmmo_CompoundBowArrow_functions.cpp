#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_CompoundBowArrow.PrimalItemAmmo_CompoundBowArrow_C
// (None)

class UClass* UPrimalItemAmmo_CompoundBowArrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_CompoundBowArrow_C");

	return Clss;
}


// PrimalItemAmmo_CompoundBowArrow_C PrimalItemAmmo_CompoundBowArrow.Default__PrimalItemAmmo_CompoundBowArrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_CompoundBowArrow_C* UPrimalItemAmmo_CompoundBowArrow_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_CompoundBowArrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_CompoundBowArrow_C*>(UPrimalItemAmmo_CompoundBowArrow_C::StaticClass()->DefaultObject);

	return Default;
}

}


