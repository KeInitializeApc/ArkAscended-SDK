#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArtifactAB.PrimalItemArtifactAB_C
// (None)

class UClass* UPrimalItemArtifactAB_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArtifactAB_C");

	return Clss;
}


// PrimalItemArtifactAB_C PrimalItemArtifactAB.Default__PrimalItemArtifactAB_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArtifactAB_C* UPrimalItemArtifactAB_C::GetDefaultObj()
{
	static class UPrimalItemArtifactAB_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArtifactAB_C*>(UPrimalItemArtifactAB_C::StaticClass()->DefaultObject);

	return Default;
}

}


