#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArtifact_03.PrimalItemArtifact_03_C
// (None)

class UClass* UPrimalItemArtifact_03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArtifact_03_C");

	return Clss;
}


// PrimalItemArtifact_03_C PrimalItemArtifact_03.Default__PrimalItemArtifact_03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArtifact_03_C* UPrimalItemArtifact_03_C::GetDefaultObj()
{
	static class UPrimalItemArtifact_03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArtifact_03_C*>(UPrimalItemArtifact_03_C::StaticClass()->DefaultObject);

	return Default;
}

}


