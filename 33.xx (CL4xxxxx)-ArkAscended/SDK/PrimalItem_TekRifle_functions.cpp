#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_TekRifle.PrimalItem_TekRifle_C
// (None)

class UClass* UPrimalItem_TekRifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_TekRifle_C");

	return Clss;
}


// PrimalItem_TekRifle_C PrimalItem_TekRifle.Default__PrimalItem_TekRifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_TekRifle_C* UPrimalItem_TekRifle_C::GetDefaultObj()
{
	static class UPrimalItem_TekRifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_TekRifle_C*>(UPrimalItem_TekRifle_C::StaticClass()->DefaultObject);

	return Default;
}

}


