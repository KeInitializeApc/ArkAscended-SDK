#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArtifact_07.PrimalItemArtifact_07_C
// (None)

class UClass* UPrimalItemArtifact_07_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArtifact_07_C");

	return Clss;
}


// PrimalItemArtifact_07_C PrimalItemArtifact_07.Default__PrimalItemArtifact_07_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArtifact_07_C* UPrimalItemArtifact_07_C::GetDefaultObj()
{
	static class UPrimalItemArtifact_07_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArtifact_07_C*>(UPrimalItemArtifact_07_C::StaticClass()->DefaultObject);

	return Default;
}

}


