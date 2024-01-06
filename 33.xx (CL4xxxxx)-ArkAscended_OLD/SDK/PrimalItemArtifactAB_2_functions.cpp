#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArtifactAB_2.PrimalItemArtifactAB_2_C
// (None)

class UClass* UPrimalItemArtifactAB_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArtifactAB_2_C");

	return Clss;
}


// PrimalItemArtifactAB_2_C PrimalItemArtifactAB_2.Default__PrimalItemArtifactAB_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArtifactAB_2_C* UPrimalItemArtifactAB_2_C::GetDefaultObj()
{
	static class UPrimalItemArtifactAB_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArtifactAB_2_C*>(UPrimalItemArtifactAB_2_C::StaticClass()->DefaultObject);

	return Default;
}

}


