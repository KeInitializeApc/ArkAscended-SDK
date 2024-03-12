#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_TekSniper.PrimalItem_TekSniper_C
// (None)

class UClass* UPrimalItem_TekSniper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_TekSniper_C");

	return Clss;
}


// PrimalItem_TekSniper_C PrimalItem_TekSniper.Default__PrimalItem_TekSniper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_TekSniper_C* UPrimalItem_TekSniper_C::GetDefaultObj()
{
	static class UPrimalItem_TekSniper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_TekSniper_C*>(UPrimalItem_TekSniper_C::StaticClass()->DefaultObject);

	return Default;
}

}


