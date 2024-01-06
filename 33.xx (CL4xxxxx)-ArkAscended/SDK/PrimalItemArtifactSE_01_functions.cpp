#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArtifactSE_01.PrimalItemArtifactSE_01_C
// (None)

class UClass* UPrimalItemArtifactSE_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArtifactSE_01_C");

	return Clss;
}


// PrimalItemArtifactSE_01_C PrimalItemArtifactSE_01.Default__PrimalItemArtifactSE_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArtifactSE_01_C* UPrimalItemArtifactSE_01_C::GetDefaultObj()
{
	static class UPrimalItemArtifactSE_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArtifactSE_01_C*>(UPrimalItemArtifactSE_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


