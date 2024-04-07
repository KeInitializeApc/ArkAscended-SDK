#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_AmmoniteBlood.PrimalItemResource_AmmoniteBlood_C
// (None)

class UClass* UPrimalItemResource_AmmoniteBlood_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_AmmoniteBlood_C");

	return Clss;
}


// PrimalItemResource_AmmoniteBlood_C PrimalItemResource_AmmoniteBlood.Default__PrimalItemResource_AmmoniteBlood_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_AmmoniteBlood_C* UPrimalItemResource_AmmoniteBlood_C::GetDefaultObj()
{
	static class UPrimalItemResource_AmmoniteBlood_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_AmmoniteBlood_C*>(UPrimalItemResource_AmmoniteBlood_C::StaticClass()->DefaultObject);

	return Default;
}

}


