#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_WoodSign.PrimalItemStructure_WoodSign_C
// (None)

class UClass* UPrimalItemStructure_WoodSign_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_WoodSign_C");

	return Clss;
}


// PrimalItemStructure_WoodSign_C PrimalItemStructure_WoodSign.Default__PrimalItemStructure_WoodSign_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_WoodSign_C* UPrimalItemStructure_WoodSign_C::GetDefaultObj()
{
	static class UPrimalItemStructure_WoodSign_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_WoodSign_C*>(UPrimalItemStructure_WoodSign_C::StaticClass()->DefaultObject);

	return Default;
}

}


