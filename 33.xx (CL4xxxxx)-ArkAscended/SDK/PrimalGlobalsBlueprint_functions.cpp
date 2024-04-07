#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalGlobalsBlueprint.PrimalGlobalsBlueprint_C
// (None)

class UClass* UPrimalGlobalsBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalGlobalsBlueprint_C");

	return Clss;
}


// PrimalGlobalsBlueprint_C PrimalGlobalsBlueprint.Default__PrimalGlobalsBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalGlobalsBlueprint_C* UPrimalGlobalsBlueprint_C::GetDefaultObj()
{
	static class UPrimalGlobalsBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalGlobalsBlueprint_C*>(UPrimalGlobalsBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}

}


