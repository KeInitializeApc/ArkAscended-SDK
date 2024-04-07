#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_WoodFloor.PrimalItemStructure_WoodFloor_C
// (None)

class UClass* UPrimalItemStructure_WoodFloor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_WoodFloor_C");

	return Clss;
}


// PrimalItemStructure_WoodFloor_C PrimalItemStructure_WoodFloor.Default__PrimalItemStructure_WoodFloor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_WoodFloor_C* UPrimalItemStructure_WoodFloor_C::GetDefaultObj()
{
	static class UPrimalItemStructure_WoodFloor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_WoodFloor_C*>(UPrimalItemStructure_WoodFloor_C::StaticClass()->DefaultObject);

	return Default;
}

}


