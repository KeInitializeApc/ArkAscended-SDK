#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArtifact_01.PrimalItemArtifact_01_C
// (None)

class UClass* UPrimalItemArtifact_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArtifact_01_C");

	return Clss;
}


// PrimalItemArtifact_01_C PrimalItemArtifact_01.Default__PrimalItemArtifact_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArtifact_01_C* UPrimalItemArtifact_01_C::GetDefaultObj()
{
	static class UPrimalItemArtifact_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArtifact_01_C*>(UPrimalItemArtifact_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


