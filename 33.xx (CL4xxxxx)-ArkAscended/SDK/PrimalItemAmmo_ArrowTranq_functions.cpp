#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_ArrowTranq.PrimalItemAmmo_ArrowTranq_C
// (None)

class UClass* UPrimalItemAmmo_ArrowTranq_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_ArrowTranq_C");

	return Clss;
}


// PrimalItemAmmo_ArrowTranq_C PrimalItemAmmo_ArrowTranq.Default__PrimalItemAmmo_ArrowTranq_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_ArrowTranq_C* UPrimalItemAmmo_ArrowTranq_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_ArrowTranq_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_ArrowTranq_C*>(UPrimalItemAmmo_ArrowTranq_C::StaticClass()->DefaultObject);

	return Default;
}

}


