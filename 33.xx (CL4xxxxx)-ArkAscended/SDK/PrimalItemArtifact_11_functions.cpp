#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArtifact_11.PrimalItemArtifact_11_C
// (None)

class UClass* UPrimalItemArtifact_11_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArtifact_11_C");

	return Clss;
}


// PrimalItemArtifact_11_C PrimalItemArtifact_11.Default__PrimalItemArtifact_11_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArtifact_11_C* UPrimalItemArtifact_11_C::GetDefaultObj()
{
	static class UPrimalItemArtifact_11_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArtifact_11_C*>(UPrimalItemArtifact_11_C::StaticClass()->DefaultObject);

	return Default;
}

}


