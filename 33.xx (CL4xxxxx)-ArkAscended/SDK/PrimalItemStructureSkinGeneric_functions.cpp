#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructureSkinGeneric.PrimalItemStructureSkinGeneric_C
// (None)

class UClass* UPrimalItemStructureSkinGeneric_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructureSkinGeneric_C");

	return Clss;
}


// PrimalItemStructureSkinGeneric_C PrimalItemStructureSkinGeneric.Default__PrimalItemStructureSkinGeneric_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructureSkinGeneric_C* UPrimalItemStructureSkinGeneric_C::GetDefaultObj()
{
	static class UPrimalItemStructureSkinGeneric_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructureSkinGeneric_C*>(UPrimalItemStructureSkinGeneric_C::StaticClass()->DefaultObject);

	return Default;
}

}


