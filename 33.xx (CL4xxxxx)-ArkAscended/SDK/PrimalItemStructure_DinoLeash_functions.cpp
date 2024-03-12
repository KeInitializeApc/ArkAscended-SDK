#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_DinoLeash.PrimalItemStructure_DinoLeash_C
// (None)

class UClass* UPrimalItemStructure_DinoLeash_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_DinoLeash_C");

	return Clss;
}


// PrimalItemStructure_DinoLeash_C PrimalItemStructure_DinoLeash.Default__PrimalItemStructure_DinoLeash_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_DinoLeash_C* UPrimalItemStructure_DinoLeash_C::GetDefaultObj()
{
	static class UPrimalItemStructure_DinoLeash_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_DinoLeash_C*>(UPrimalItemStructure_DinoLeash_C::StaticClass()->DefaultObject);

	return Default;
}

}


