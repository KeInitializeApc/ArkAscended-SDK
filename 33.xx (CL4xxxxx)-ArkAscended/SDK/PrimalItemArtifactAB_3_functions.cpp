#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArtifactAB_3.PrimalItemArtifactAB_3_C
// (None)

class UClass* UPrimalItemArtifactAB_3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArtifactAB_3_C");

	return Clss;
}


// PrimalItemArtifactAB_3_C PrimalItemArtifactAB_3.Default__PrimalItemArtifactAB_3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArtifactAB_3_C* UPrimalItemArtifactAB_3_C::GetDefaultObj()
{
	static class UPrimalItemArtifactAB_3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArtifactAB_3_C*>(UPrimalItemArtifactAB_3_C::StaticClass()->DefaultObject);

	return Default;
}

}


