#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_GasCollector.PrimalItemStructure_GasCollector_C
// (None)

class UClass* UPrimalItemStructure_GasCollector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_GasCollector_C");

	return Clss;
}


// PrimalItemStructure_GasCollector_C PrimalItemStructure_GasCollector.Default__PrimalItemStructure_GasCollector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_GasCollector_C* UPrimalItemStructure_GasCollector_C::GetDefaultObj()
{
	static class UPrimalItemStructure_GasCollector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_GasCollector_C*>(UPrimalItemStructure_GasCollector_C::StaticClass()->DefaultObject);

	return Default;
}

}


