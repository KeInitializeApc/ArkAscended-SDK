#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArtifactGeneric.PrimalItemArtifactGeneric_C
// (None)

class UClass* UPrimalItemArtifactGeneric_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArtifactGeneric_C");

	return Clss;
}


// PrimalItemArtifactGeneric_C PrimalItemArtifactGeneric.Default__PrimalItemArtifactGeneric_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArtifactGeneric_C* UPrimalItemArtifactGeneric_C::GetDefaultObj()
{
	static class UPrimalItemArtifactGeneric_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArtifactGeneric_C*>(UPrimalItemArtifactGeneric_C::StaticClass()->DefaultObject);

	return Default;
}

}


