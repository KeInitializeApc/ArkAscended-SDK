#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_PoisonGrenade.PrimalItem_PoisonGrenade_C
// (None)

class UClass* UPrimalItem_PoisonGrenade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_PoisonGrenade_C");

	return Clss;
}


// PrimalItem_PoisonGrenade_C PrimalItem_PoisonGrenade.Default__PrimalItem_PoisonGrenade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_PoisonGrenade_C* UPrimalItem_PoisonGrenade_C::GetDefaultObj()
{
	static class UPrimalItem_PoisonGrenade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_PoisonGrenade_C*>(UPrimalItem_PoisonGrenade_C::StaticClass()->DefaultObject);

	return Default;
}

}


