#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponPaintbrush.PrimalItem_WeaponPaintbrush_C
// (None)

class UClass* UPrimalItem_WeaponPaintbrush_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponPaintbrush_C");

	return Clss;
}


// PrimalItem_WeaponPaintbrush_C PrimalItem_WeaponPaintbrush.Default__PrimalItem_WeaponPaintbrush_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponPaintbrush_C* UPrimalItem_WeaponPaintbrush_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponPaintbrush_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponPaintbrush_C*>(UPrimalItem_WeaponPaintbrush_C::StaticClass()->DefaultObject);

	return Default;
}

}


