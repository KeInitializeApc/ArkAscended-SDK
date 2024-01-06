#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_GasGrenade.PrimalItem_GasGrenade_C
// (None)

class UClass* UPrimalItem_GasGrenade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_GasGrenade_C");

	return Clss;
}


// PrimalItem_GasGrenade_C PrimalItem_GasGrenade.Default__PrimalItem_GasGrenade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_GasGrenade_C* UPrimalItem_GasGrenade_C::GetDefaultObj()
{
	static class UPrimalItem_GasGrenade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_GasGrenade_C*>(UPrimalItem_GasGrenade_C::StaticClass()->DefaultObject);

	return Default;
}

}


