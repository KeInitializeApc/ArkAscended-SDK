#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemCostumeGeneric.PrimalItemCostumeGeneric_C
// (None)

class UClass* UPrimalItemCostumeGeneric_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemCostumeGeneric_C");

	return Clss;
}


// PrimalItemCostumeGeneric_C PrimalItemCostumeGeneric.Default__PrimalItemCostumeGeneric_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemCostumeGeneric_C* UPrimalItemCostumeGeneric_C::GetDefaultObj()
{
	static class UPrimalItemCostumeGeneric_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemCostumeGeneric_C*>(UPrimalItemCostumeGeneric_C::StaticClass()->DefaultObject);

	return Default;
}

}


