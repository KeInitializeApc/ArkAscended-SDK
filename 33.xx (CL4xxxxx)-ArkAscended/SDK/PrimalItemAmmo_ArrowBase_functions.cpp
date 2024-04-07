#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_ArrowBase.PrimalItemAmmo_ArrowBase_C
// (None)

class UClass* UPrimalItemAmmo_ArrowBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_ArrowBase_C");

	return Clss;
}


// PrimalItemAmmo_ArrowBase_C PrimalItemAmmo_ArrowBase.Default__PrimalItemAmmo_ArrowBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_ArrowBase_C* UPrimalItemAmmo_ArrowBase_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_ArrowBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_ArrowBase_C*>(UPrimalItemAmmo_ArrowBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


