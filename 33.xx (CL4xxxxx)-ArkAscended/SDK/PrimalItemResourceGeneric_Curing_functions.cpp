#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResourceGeneric_Curing.PrimalItemResourceGeneric_Curing_C
// (None)

class UClass* UPrimalItemResourceGeneric_Curing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResourceGeneric_Curing_C");

	return Clss;
}


// PrimalItemResourceGeneric_Curing_C PrimalItemResourceGeneric_Curing.Default__PrimalItemResourceGeneric_Curing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResourceGeneric_Curing_C* UPrimalItemResourceGeneric_Curing_C::GetDefaultObj()
{
	static class UPrimalItemResourceGeneric_Curing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResourceGeneric_Curing_C*>(UPrimalItemResourceGeneric_Curing_C::StaticClass()->DefaultObject);

	return Default;
}

}


