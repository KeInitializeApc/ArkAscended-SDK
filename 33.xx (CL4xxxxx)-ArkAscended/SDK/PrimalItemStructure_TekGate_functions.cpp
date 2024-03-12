#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TekGate.PrimalItemStructure_TekGate_C
// (None)

class UClass* UPrimalItemStructure_TekGate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TekGate_C");

	return Clss;
}


// PrimalItemStructure_TekGate_C PrimalItemStructure_TekGate.Default__PrimalItemStructure_TekGate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TekGate_C* UPrimalItemStructure_TekGate_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TekGate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TekGate_C*>(UPrimalItemStructure_TekGate_C::StaticClass()->DefaultObject);

	return Default;
}

}


