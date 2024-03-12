#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_WoodGate.PrimalItemStructure_WoodGate_C
// (None)

class UClass* UPrimalItemStructure_WoodGate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_WoodGate_C");

	return Clss;
}


// PrimalItemStructure_WoodGate_C PrimalItemStructure_WoodGate.Default__PrimalItemStructure_WoodGate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_WoodGate_C* UPrimalItemStructure_WoodGate_C::GetDefaultObj()
{
	static class UPrimalItemStructure_WoodGate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_WoodGate_C*>(UPrimalItemStructure_WoodGate_C::StaticClass()->DefaultObject);

	return Default;
}

}


