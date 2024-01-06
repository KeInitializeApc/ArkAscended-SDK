#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArtifact_Extinction_IceKaiju.PrimalItemArtifact_Extinction_IceKaiju_C
// (None)

class UClass* UPrimalItemArtifact_Extinction_IceKaiju_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArtifact_Extinction_IceKaiju_C");

	return Clss;
}


// PrimalItemArtifact_Extinction_IceKaiju_C PrimalItemArtifact_Extinction_IceKaiju.Default__PrimalItemArtifact_Extinction_IceKaiju_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArtifact_Extinction_IceKaiju_C* UPrimalItemArtifact_Extinction_IceKaiju_C::GetDefaultObj()
{
	static class UPrimalItemArtifact_Extinction_IceKaiju_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArtifact_Extinction_IceKaiju_C*>(UPrimalItemArtifact_Extinction_IceKaiju_C::StaticClass()->DefaultObject);

	return Default;
}

}


