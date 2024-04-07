#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_ChainSaw.PrimalItem_ChainSaw_C
// (None)

class UClass* UPrimalItem_ChainSaw_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_ChainSaw_C");

	return Clss;
}


// PrimalItem_ChainSaw_C PrimalItem_ChainSaw.Default__PrimalItem_ChainSaw_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_ChainSaw_C* UPrimalItem_ChainSaw_C::GetDefaultObj()
{
	static class UPrimalItem_ChainSaw_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_ChainSaw_C*>(UPrimalItem_ChainSaw_C::StaticClass()->DefaultObject);

	return Default;
}

}


