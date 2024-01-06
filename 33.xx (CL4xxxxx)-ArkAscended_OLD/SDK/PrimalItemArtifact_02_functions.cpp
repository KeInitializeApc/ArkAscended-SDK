#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArtifact_02.PrimalItemArtifact_02_C
// (None)

class UClass* UPrimalItemArtifact_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArtifact_02_C");

	return Clss;
}


// PrimalItemArtifact_02_C PrimalItemArtifact_02.Default__PrimalItemArtifact_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArtifact_02_C* UPrimalItemArtifact_02_C::GetDefaultObj()
{
	static class UPrimalItemArtifact_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArtifact_02_C*>(UPrimalItemArtifact_02_C::StaticClass()->DefaultObject);

	return Default;
}

}


