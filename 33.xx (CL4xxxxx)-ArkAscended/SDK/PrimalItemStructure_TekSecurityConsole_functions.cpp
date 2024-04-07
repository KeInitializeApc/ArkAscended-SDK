#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TekSecurityConsole.PrimalItemStructure_TekSecurityConsole_C
// (None)

class UClass* UPrimalItemStructure_TekSecurityConsole_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TekSecurityConsole_C");

	return Clss;
}


// PrimalItemStructure_TekSecurityConsole_C PrimalItemStructure_TekSecurityConsole.Default__PrimalItemStructure_TekSecurityConsole_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TekSecurityConsole_C* UPrimalItemStructure_TekSecurityConsole_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TekSecurityConsole_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TekSecurityConsole_C*>(UPrimalItemStructure_TekSecurityConsole_C::StaticClass()->DefaultObject);

	return Default;
}

}


