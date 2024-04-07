#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_GreenhouseWall.PrimalItemStructure_GreenhouseWall_C
// (None)

class UClass* UPrimalItemStructure_GreenhouseWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_GreenhouseWall_C");

	return Clss;
}


// PrimalItemStructure_GreenhouseWall_C PrimalItemStructure_GreenhouseWall.Default__PrimalItemStructure_GreenhouseWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_GreenhouseWall_C* UPrimalItemStructure_GreenhouseWall_C::GetDefaultObj()
{
	static class UPrimalItemStructure_GreenhouseWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_GreenhouseWall_C*>(UPrimalItemStructure_GreenhouseWall_C::StaticClass()->DefaultObject);

	return Default;
}

}


