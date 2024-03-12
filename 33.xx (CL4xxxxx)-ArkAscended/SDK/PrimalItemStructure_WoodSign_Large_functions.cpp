#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_WoodSign_Large.PrimalItemStructure_WoodSign_Large_C
// (None)

class UClass* UPrimalItemStructure_WoodSign_Large_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_WoodSign_Large_C");

	return Clss;
}


// PrimalItemStructure_WoodSign_Large_C PrimalItemStructure_WoodSign_Large.Default__PrimalItemStructure_WoodSign_Large_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_WoodSign_Large_C* UPrimalItemStructure_WoodSign_Large_C::GetDefaultObj()
{
	static class UPrimalItemStructure_WoodSign_Large_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_WoodSign_Large_C*>(UPrimalItemStructure_WoodSign_Large_C::StaticClass()->DefaultObject);

	return Default;
}

}


