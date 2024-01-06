#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResourceGeneric.PrimalItemResourceGeneric_C
// (None)

class UClass* UPrimalItemResourceGeneric_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResourceGeneric_C");

	return Clss;
}


// PrimalItemResourceGeneric_C PrimalItemResourceGeneric.Default__PrimalItemResourceGeneric_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResourceGeneric_C* UPrimalItemResourceGeneric_C::GetDefaultObj()
{
	static class UPrimalItemResourceGeneric_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResourceGeneric_C*>(UPrimalItemResourceGeneric_C::StaticClass()->DefaultObject);

	return Default;
}

}


