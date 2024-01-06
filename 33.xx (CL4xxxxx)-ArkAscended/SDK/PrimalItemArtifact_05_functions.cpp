#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArtifact_05.PrimalItemArtifact_05_C
// (None)

class UClass* UPrimalItemArtifact_05_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArtifact_05_C");

	return Clss;
}


// PrimalItemArtifact_05_C PrimalItemArtifact_05.Default__PrimalItemArtifact_05_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArtifact_05_C* UPrimalItemArtifact_05_C::GetDefaultObj()
{
	static class UPrimalItemArtifact_05_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArtifact_05_C*>(UPrimalItemArtifact_05_C::StaticClass()->DefaultObject);

	return Default;
}

}


