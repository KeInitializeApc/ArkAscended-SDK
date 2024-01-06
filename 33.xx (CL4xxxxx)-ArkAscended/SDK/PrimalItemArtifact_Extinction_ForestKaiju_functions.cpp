#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArtifact_Extinction_ForestKaiju.PrimalItemArtifact_Extinction_ForestKaiju_C
// (None)

class UClass* UPrimalItemArtifact_Extinction_ForestKaiju_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArtifact_Extinction_ForestKaiju_C");

	return Clss;
}


// PrimalItemArtifact_Extinction_ForestKaiju_C PrimalItemArtifact_Extinction_ForestKaiju.Default__PrimalItemArtifact_Extinction_ForestKaiju_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArtifact_Extinction_ForestKaiju_C* UPrimalItemArtifact_Extinction_ForestKaiju_C::GetDefaultObj()
{
	static class UPrimalItemArtifact_Extinction_ForestKaiju_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArtifact_Extinction_ForestKaiju_C*>(UPrimalItemArtifact_Extinction_ForestKaiju_C::StaticClass()->DefaultObject);

	return Default;
}

}


