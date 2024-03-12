#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_WoodGateframe_Large.PrimalItemStructure_WoodGateframe_Large_C
// (None)

class UClass* UPrimalItemStructure_WoodGateframe_Large_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_WoodGateframe_Large_C");

	return Clss;
}


// PrimalItemStructure_WoodGateframe_Large_C PrimalItemStructure_WoodGateframe_Large.Default__PrimalItemStructure_WoodGateframe_Large_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_WoodGateframe_Large_C* UPrimalItemStructure_WoodGateframe_Large_C::GetDefaultObj()
{
	static class UPrimalItemStructure_WoodGateframe_Large_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_WoodGateframe_Large_C*>(UPrimalItemStructure_WoodGateframe_Large_C::StaticClass()->DefaultObject);

	return Default;
}

}


