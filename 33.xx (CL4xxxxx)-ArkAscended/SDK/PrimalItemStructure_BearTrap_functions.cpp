#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_BearTrap.PrimalItemStructure_BearTrap_C
// (None)

class UClass* UPrimalItemStructure_BearTrap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_BearTrap_C");

	return Clss;
}


// PrimalItemStructure_BearTrap_C PrimalItemStructure_BearTrap.Default__PrimalItemStructure_BearTrap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_BearTrap_C* UPrimalItemStructure_BearTrap_C::GetDefaultObj()
{
	static class UPrimalItemStructure_BearTrap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_BearTrap_C*>(UPrimalItemStructure_BearTrap_C::StaticClass()->DefaultObject);

	return Default;
}

}


