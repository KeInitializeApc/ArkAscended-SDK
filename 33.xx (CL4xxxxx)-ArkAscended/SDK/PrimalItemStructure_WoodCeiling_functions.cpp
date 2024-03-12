#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_WoodCeiling.PrimalItemStructure_WoodCeiling_C
// (None)

class UClass* UPrimalItemStructure_WoodCeiling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_WoodCeiling_C");

	return Clss;
}


// PrimalItemStructure_WoodCeiling_C PrimalItemStructure_WoodCeiling.Default__PrimalItemStructure_WoodCeiling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_WoodCeiling_C* UPrimalItemStructure_WoodCeiling_C::GetDefaultObj()
{
	static class UPrimalItemStructure_WoodCeiling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_WoodCeiling_C*>(UPrimalItemStructure_WoodCeiling_C::StaticClass()->DefaultObject);

	return Default;
}

}


