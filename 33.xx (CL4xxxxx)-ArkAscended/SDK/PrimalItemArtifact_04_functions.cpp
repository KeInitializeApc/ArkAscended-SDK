#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArtifact_04.PrimalItemArtifact_04_C
// (None)

class UClass* UPrimalItemArtifact_04_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArtifact_04_C");

	return Clss;
}


// PrimalItemArtifact_04_C PrimalItemArtifact_04.Default__PrimalItemArtifact_04_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArtifact_04_C* UPrimalItemArtifact_04_C::GetDefaultObj()
{
	static class UPrimalItemArtifact_04_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArtifact_04_C*>(UPrimalItemArtifact_04_C::StaticClass()->DefaultObject);

	return Default;
}

}


