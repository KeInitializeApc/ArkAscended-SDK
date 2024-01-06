#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_ArrowNet.PrimalItemAmmo_ArrowNet_C
// (None)

class UClass* UPrimalItemAmmo_ArrowNet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_ArrowNet_C");

	return Clss;
}


// PrimalItemAmmo_ArrowNet_C PrimalItemAmmo_ArrowNet.Default__PrimalItemAmmo_ArrowNet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_ArrowNet_C* UPrimalItemAmmo_ArrowNet_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_ArrowNet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_ArrowNet_C*>(UPrimalItemAmmo_ArrowNet_C::StaticClass()->DefaultObject);

	return Default;
}

}


