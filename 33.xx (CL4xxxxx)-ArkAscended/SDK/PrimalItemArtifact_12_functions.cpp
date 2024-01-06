#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArtifact_12.PrimalItemArtifact_12_C
// (None)

class UClass* UPrimalItemArtifact_12_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArtifact_12_C");

	return Clss;
}


// PrimalItemArtifact_12_C PrimalItemArtifact_12.Default__PrimalItemArtifact_12_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArtifact_12_C* UPrimalItemArtifact_12_C::GetDefaultObj()
{
	static class UPrimalItemArtifact_12_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArtifact_12_C*>(UPrimalItemArtifact_12_C::StaticClass()->DefaultObject);

	return Default;
}

}


