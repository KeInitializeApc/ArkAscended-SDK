#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructureGeneric.PrimalItemStructureGeneric_C
// (None)

class UClass* UPrimalItemStructureGeneric_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructureGeneric_C");

	return Clss;
}


// PrimalItemStructureGeneric_C PrimalItemStructureGeneric.Default__PrimalItemStructureGeneric_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructureGeneric_C* UPrimalItemStructureGeneric_C::GetDefaultObj()
{
	static class UPrimalItemStructureGeneric_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructureGeneric_C*>(UPrimalItemStructureGeneric_C::StaticClass()->DefaultObject);

	return Default;
}

}


