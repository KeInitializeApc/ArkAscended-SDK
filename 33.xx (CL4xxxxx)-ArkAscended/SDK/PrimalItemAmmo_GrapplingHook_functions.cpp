#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_GrapplingHook.PrimalItemAmmo_GrapplingHook_C
// (None)

class UClass* UPrimalItemAmmo_GrapplingHook_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_GrapplingHook_C");

	return Clss;
}


// PrimalItemAmmo_GrapplingHook_C PrimalItemAmmo_GrapplingHook.Default__PrimalItemAmmo_GrapplingHook_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_GrapplingHook_C* UPrimalItemAmmo_GrapplingHook_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_GrapplingHook_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_GrapplingHook_C*>(UPrimalItemAmmo_GrapplingHook_C::StaticClass()->DefaultObject);

	return Default;
}

}


