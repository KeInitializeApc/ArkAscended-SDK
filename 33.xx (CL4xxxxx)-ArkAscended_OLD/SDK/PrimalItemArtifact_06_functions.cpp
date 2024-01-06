#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArtifact_06.PrimalItemArtifact_06_C
// (None)

class UClass* UPrimalItemArtifact_06_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArtifact_06_C");

	return Clss;
}


// PrimalItemArtifact_06_C PrimalItemArtifact_06.Default__PrimalItemArtifact_06_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArtifact_06_C* UPrimalItemArtifact_06_C::GetDefaultObj()
{
	static class UPrimalItemArtifact_06_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArtifact_06_C*>(UPrimalItemArtifact_06_C::StaticClass()->DefaultObject);

	return Default;
}

}


