#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemSkinGeneric.PrimalItemSkinGeneric_C
// (None)

class UClass* UPrimalItemSkinGeneric_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemSkinGeneric_C");

	return Clss;
}


// PrimalItemSkinGeneric_C PrimalItemSkinGeneric.Default__PrimalItemSkinGeneric_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemSkinGeneric_C* UPrimalItemSkinGeneric_C::GetDefaultObj()
{
	static class UPrimalItemSkinGeneric_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemSkinGeneric_C*>(UPrimalItemSkinGeneric_C::StaticClass()->DefaultObject);

	return Default;
}

}


