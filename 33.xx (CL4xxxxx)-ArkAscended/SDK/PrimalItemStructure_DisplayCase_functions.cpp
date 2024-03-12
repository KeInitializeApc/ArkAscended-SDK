#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_DisplayCase.PrimalItemStructure_DisplayCase_C
// (None)

class UClass* UPrimalItemStructure_DisplayCase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_DisplayCase_C");

	return Clss;
}


// PrimalItemStructure_DisplayCase_C PrimalItemStructure_DisplayCase.Default__PrimalItemStructure_DisplayCase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_DisplayCase_C* UPrimalItemStructure_DisplayCase_C::GetDefaultObj()
{
	static class UPrimalItemStructure_DisplayCase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_DisplayCase_C*>(UPrimalItemStructure_DisplayCase_C::StaticClass()->DefaultObject);

	return Default;
}

}


