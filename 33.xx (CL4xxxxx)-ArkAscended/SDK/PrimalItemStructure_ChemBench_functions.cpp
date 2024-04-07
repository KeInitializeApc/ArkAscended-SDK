#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_ChemBench.PrimalItemStructure_ChemBench_C
// (None)

class UClass* UPrimalItemStructure_ChemBench_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_ChemBench_C");

	return Clss;
}


// PrimalItemStructure_ChemBench_C PrimalItemStructure_ChemBench.Default__PrimalItemStructure_ChemBench_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_ChemBench_C* UPrimalItemStructure_ChemBench_C::GetDefaultObj()
{
	static class UPrimalItemStructure_ChemBench_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_ChemBench_C*>(UPrimalItemStructure_ChemBench_C::StaticClass()->DefaultObject);

	return Default;
}

}


