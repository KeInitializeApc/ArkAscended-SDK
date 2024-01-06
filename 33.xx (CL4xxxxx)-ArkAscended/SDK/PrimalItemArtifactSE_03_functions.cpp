#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArtifactSE_03.PrimalItemArtifactSE_03_C
// (None)

class UClass* UPrimalItemArtifactSE_03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArtifactSE_03_C");

	return Clss;
}


// PrimalItemArtifactSE_03_C PrimalItemArtifactSE_03.Default__PrimalItemArtifactSE_03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArtifactSE_03_C* UPrimalItemArtifactSE_03_C::GetDefaultObj()
{
	static class UPrimalItemArtifactSE_03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArtifactSE_03_C*>(UPrimalItemArtifactSE_03_C::StaticClass()->DefaultObject);

	return Default;
}

}


