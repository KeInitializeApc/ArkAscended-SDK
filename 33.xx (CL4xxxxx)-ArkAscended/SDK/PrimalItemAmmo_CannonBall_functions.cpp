#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_CannonBall.PrimalItemAmmo_CannonBall_C
// (None)

class UClass* UPrimalItemAmmo_CannonBall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_CannonBall_C");

	return Clss;
}


// PrimalItemAmmo_CannonBall_C PrimalItemAmmo_CannonBall.Default__PrimalItemAmmo_CannonBall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_CannonBall_C* UPrimalItemAmmo_CannonBall_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_CannonBall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_CannonBall_C*>(UPrimalItemAmmo_CannonBall_C::StaticClass()->DefaultObject);

	return Default;
}

}


