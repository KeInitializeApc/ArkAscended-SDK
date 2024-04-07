#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArtifact_08.PrimalItemArtifact_08_C
// (None)

class UClass* UPrimalItemArtifact_08_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArtifact_08_C");

	return Clss;
}


// PrimalItemArtifact_08_C PrimalItemArtifact_08.Default__PrimalItemArtifact_08_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArtifact_08_C* UPrimalItemArtifact_08_C::GetDefaultObj()
{
	static class UPrimalItemArtifact_08_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArtifact_08_C*>(UPrimalItemArtifact_08_C::StaticClass()->DefaultObject);

	return Default;
}

}


