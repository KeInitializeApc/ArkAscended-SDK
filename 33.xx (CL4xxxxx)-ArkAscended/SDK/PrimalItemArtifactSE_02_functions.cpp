#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArtifactSE_02.PrimalItemArtifactSE_02_C
// (None)

class UClass* UPrimalItemArtifactSE_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArtifactSE_02_C");

	return Clss;
}


// PrimalItemArtifactSE_02_C PrimalItemArtifactSE_02.Default__PrimalItemArtifactSE_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArtifactSE_02_C* UPrimalItemArtifactSE_02_C::GetDefaultObj()
{
	static class UPrimalItemArtifactSE_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArtifactSE_02_C*>(UPrimalItemArtifactSE_02_C::StaticClass()->DefaultObject);

	return Default;
}

}


