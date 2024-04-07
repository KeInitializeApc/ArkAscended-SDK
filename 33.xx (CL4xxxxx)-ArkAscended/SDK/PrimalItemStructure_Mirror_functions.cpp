#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_Mirror.PrimalItemStructure_Mirror_C
// (None)

class UClass* UPrimalItemStructure_Mirror_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_Mirror_C");

	return Clss;
}


// PrimalItemStructure_Mirror_C PrimalItemStructure_Mirror.Default__PrimalItemStructure_Mirror_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_Mirror_C* UPrimalItemStructure_Mirror_C::GetDefaultObj()
{
	static class UPrimalItemStructure_Mirror_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_Mirror_C*>(UPrimalItemStructure_Mirror_C::StaticClass()->DefaultObject);

	return Default;
}

}


