#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_AggroTranqDart.PrimalItemAmmo_AggroTranqDart_C
// (None)

class UClass* UPrimalItemAmmo_AggroTranqDart_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_AggroTranqDart_C");

	return Clss;
}


// PrimalItemAmmo_AggroTranqDart_C PrimalItemAmmo_AggroTranqDart.Default__PrimalItemAmmo_AggroTranqDart_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_AggroTranqDart_C* UPrimalItemAmmo_AggroTranqDart_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_AggroTranqDart_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_AggroTranqDart_C*>(UPrimalItemAmmo_AggroTranqDart_C::StaticClass()->DefaultObject);

	return Default;
}

}


