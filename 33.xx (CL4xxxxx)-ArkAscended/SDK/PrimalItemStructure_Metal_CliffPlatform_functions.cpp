#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_Metal_CliffPlatform.PrimalItemStructure_Metal_CliffPlatform_C
// (None)

class UClass* UPrimalItemStructure_Metal_CliffPlatform_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_Metal_CliffPlatform_C");

	return Clss;
}


// PrimalItemStructure_Metal_CliffPlatform_C PrimalItemStructure_Metal_CliffPlatform.Default__PrimalItemStructure_Metal_CliffPlatform_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_Metal_CliffPlatform_C* UPrimalItemStructure_Metal_CliffPlatform_C::GetDefaultObj()
{
	static class UPrimalItemStructure_Metal_CliffPlatform_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_Metal_CliffPlatform_C*>(UPrimalItemStructure_Metal_CliffPlatform_C::StaticClass()->DefaultObject);

	return Default;
}

}


