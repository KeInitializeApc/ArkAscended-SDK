#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TekGateframe.PrimalItemStructure_TekGateframe_C
// (None)

class UClass* UPrimalItemStructure_TekGateframe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TekGateframe_C");

	return Clss;
}


// PrimalItemStructure_TekGateframe_C PrimalItemStructure_TekGateframe.Default__PrimalItemStructure_TekGateframe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TekGateframe_C* UPrimalItemStructure_TekGateframe_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TekGateframe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TekGateframe_C*>(UPrimalItemStructure_TekGateframe_C::StaticClass()->DefaultObject);

	return Default;
}

}


