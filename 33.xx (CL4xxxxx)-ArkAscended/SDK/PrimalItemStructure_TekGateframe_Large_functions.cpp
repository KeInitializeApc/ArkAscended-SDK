#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TekGateframe_Large.PrimalItemStructure_TekGateframe_Large_C
// (None)

class UClass* UPrimalItemStructure_TekGateframe_Large_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TekGateframe_Large_C");

	return Clss;
}


// PrimalItemStructure_TekGateframe_Large_C PrimalItemStructure_TekGateframe_Large.Default__PrimalItemStructure_TekGateframe_Large_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TekGateframe_Large_C* UPrimalItemStructure_TekGateframe_Large_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TekGateframe_Large_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TekGateframe_Large_C*>(UPrimalItemStructure_TekGateframe_Large_C::StaticClass()->DefaultObject);

	return Default;
}

}


