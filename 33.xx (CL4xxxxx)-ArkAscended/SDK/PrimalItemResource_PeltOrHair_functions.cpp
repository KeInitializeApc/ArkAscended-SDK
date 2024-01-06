#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_PeltOrHair.PrimalItemResource_PeltOrHair_C
// (None)

class UClass* UPrimalItemResource_PeltOrHair_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_PeltOrHair_C");

	return Clss;
}


// PrimalItemResource_PeltOrHair_C PrimalItemResource_PeltOrHair.Default__PrimalItemResource_PeltOrHair_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_PeltOrHair_C* UPrimalItemResource_PeltOrHair_C::GetDefaultObj()
{
	static class UPrimalItemResource_PeltOrHair_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_PeltOrHair_C*>(UPrimalItemResource_PeltOrHair_C::StaticClass()->DefaultObject);

	return Default;
}

}


