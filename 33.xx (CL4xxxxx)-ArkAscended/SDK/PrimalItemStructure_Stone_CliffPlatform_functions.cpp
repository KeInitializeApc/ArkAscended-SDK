#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_Stone_CliffPlatform.PrimalItemStructure_Stone_CliffPlatform_C
// (None)

class UClass* UPrimalItemStructure_Stone_CliffPlatform_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_Stone_CliffPlatform_C");

	return Clss;
}


// PrimalItemStructure_Stone_CliffPlatform_C PrimalItemStructure_Stone_CliffPlatform.Default__PrimalItemStructure_Stone_CliffPlatform_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_Stone_CliffPlatform_C* UPrimalItemStructure_Stone_CliffPlatform_C::GetDefaultObj()
{
	static class UPrimalItemStructure_Stone_CliffPlatform_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_Stone_CliffPlatform_C*>(UPrimalItemStructure_Stone_CliffPlatform_C::StaticClass()->DefaultObject);

	return Default;
}

}


