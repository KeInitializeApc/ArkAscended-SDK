#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemSkinGeneric_Trophy.PrimalItemSkinGeneric_Trophy_C
// (None)

class UClass* UPrimalItemSkinGeneric_Trophy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemSkinGeneric_Trophy_C");

	return Clss;
}


// PrimalItemSkinGeneric_Trophy_C PrimalItemSkinGeneric_Trophy.Default__PrimalItemSkinGeneric_Trophy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemSkinGeneric_Trophy_C* UPrimalItemSkinGeneric_Trophy_C::GetDefaultObj()
{
	static class UPrimalItemSkinGeneric_Trophy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemSkinGeneric_Trophy_C*>(UPrimalItemSkinGeneric_Trophy_C::StaticClass()->DefaultObject);

	return Default;
}

}


