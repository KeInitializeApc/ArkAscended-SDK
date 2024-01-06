#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_Base.PrimalItemAmmo_Base_C
// (None)

class UClass* UPrimalItemAmmo_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_Base_C");

	return Clss;
}


// PrimalItemAmmo_Base_C PrimalItemAmmo_Base.Default__PrimalItemAmmo_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_Base_C* UPrimalItemAmmo_Base_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_Base_C*>(UPrimalItemAmmo_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


