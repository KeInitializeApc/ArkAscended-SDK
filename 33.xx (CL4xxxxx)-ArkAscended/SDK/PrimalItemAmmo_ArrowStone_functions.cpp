#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_ArrowStone.PrimalItemAmmo_ArrowStone_C
// (None)

class UClass* UPrimalItemAmmo_ArrowStone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_ArrowStone_C");

	return Clss;
}


// PrimalItemAmmo_ArrowStone_C PrimalItemAmmo_ArrowStone.Default__PrimalItemAmmo_ArrowStone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_ArrowStone_C* UPrimalItemAmmo_ArrowStone_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_ArrowStone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_ArrowStone_C*>(UPrimalItemAmmo_ArrowStone_C::StaticClass()->DefaultObject);

	return Default;
}

}


