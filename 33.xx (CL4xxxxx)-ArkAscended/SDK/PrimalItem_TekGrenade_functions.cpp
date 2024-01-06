#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_TekGrenade.PrimalItem_TekGrenade_C
// (None)

class UClass* UPrimalItem_TekGrenade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_TekGrenade_C");

	return Clss;
}


// PrimalItem_TekGrenade_C PrimalItem_TekGrenade.Default__PrimalItem_TekGrenade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_TekGrenade_C* UPrimalItem_TekGrenade_C::GetDefaultObj()
{
	static class UPrimalItem_TekGrenade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_TekGrenade_C*>(UPrimalItem_TekGrenade_C::StaticClass()->DefaultObject);

	return Default;
}

}


