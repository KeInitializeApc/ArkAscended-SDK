#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_ArrowNet_Hunt.PrimalItemAmmo_ArrowNet_Hunt_C
// (None)

class UClass* UPrimalItemAmmo_ArrowNet_Hunt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_ArrowNet_Hunt_C");

	return Clss;
}


// PrimalItemAmmo_ArrowNet_Hunt_C PrimalItemAmmo_ArrowNet_Hunt.Default__PrimalItemAmmo_ArrowNet_Hunt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_ArrowNet_Hunt_C* UPrimalItemAmmo_ArrowNet_Hunt_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_ArrowNet_Hunt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_ArrowNet_Hunt_C*>(UPrimalItemAmmo_ArrowNet_Hunt_C::StaticClass()->DefaultObject);

	return Default;
}

}


