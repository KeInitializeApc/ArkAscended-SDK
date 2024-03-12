#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_WoodGateframe.PrimalItemStructure_WoodGateframe_C
// (None)

class UClass* UPrimalItemStructure_WoodGateframe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_WoodGateframe_C");

	return Clss;
}


// PrimalItemStructure_WoodGateframe_C PrimalItemStructure_WoodGateframe.Default__PrimalItemStructure_WoodGateframe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_WoodGateframe_C* UPrimalItemStructure_WoodGateframe_C::GetDefaultObj()
{
	static class UPrimalItemStructure_WoodGateframe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_WoodGateframe_C*>(UPrimalItemStructure_WoodGateframe_C::StaticClass()->DefaultObject);

	return Default;
}

}


