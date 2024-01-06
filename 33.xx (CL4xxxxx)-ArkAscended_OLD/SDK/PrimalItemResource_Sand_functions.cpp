#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Sand.PrimalItemResource_Sand_C
// (None)

class UClass* UPrimalItemResource_Sand_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Sand_C");

	return Clss;
}


// PrimalItemResource_Sand_C PrimalItemResource_Sand.Default__PrimalItemResource_Sand_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Sand_C* UPrimalItemResource_Sand_C::GetDefaultObj()
{
	static class UPrimalItemResource_Sand_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Sand_C*>(UPrimalItemResource_Sand_C::StaticClass()->DefaultObject);

	return Default;
}

}


