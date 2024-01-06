#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArtifact_09.PrimalItemArtifact_09_C
// (None)

class UClass* UPrimalItemArtifact_09_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArtifact_09_C");

	return Clss;
}


// PrimalItemArtifact_09_C PrimalItemArtifact_09.Default__PrimalItemArtifact_09_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArtifact_09_C* UPrimalItemArtifact_09_C::GetDefaultObj()
{
	static class UPrimalItemArtifact_09_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArtifact_09_C*>(UPrimalItemArtifact_09_C::StaticClass()->DefaultObject);

	return Default;
}

}


