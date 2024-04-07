#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_BaseCliffPlatform.PrimalItemStructure_BaseCliffPlatform_C
// (None)

class UClass* UPrimalItemStructure_BaseCliffPlatform_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_BaseCliffPlatform_C");

	return Clss;
}


// PrimalItemStructure_BaseCliffPlatform_C PrimalItemStructure_BaseCliffPlatform.Default__PrimalItemStructure_BaseCliffPlatform_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_BaseCliffPlatform_C* UPrimalItemStructure_BaseCliffPlatform_C::GetDefaultObj()
{
	static class UPrimalItemStructure_BaseCliffPlatform_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_BaseCliffPlatform_C*>(UPrimalItemStructure_BaseCliffPlatform_C::StaticClass()->DefaultObject);

	return Default;
}

}


