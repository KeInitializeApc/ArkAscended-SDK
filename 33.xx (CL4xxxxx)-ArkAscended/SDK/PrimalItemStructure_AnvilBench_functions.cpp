#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_AnvilBench.PrimalItemStructure_AnvilBench_C
// (None)

class UClass* UPrimalItemStructure_AnvilBench_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_AnvilBench_C");

	return Clss;
}


// PrimalItemStructure_AnvilBench_C PrimalItemStructure_AnvilBench.Default__PrimalItemStructure_AnvilBench_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_AnvilBench_C* UPrimalItemStructure_AnvilBench_C::GetDefaultObj()
{
	static class UPrimalItemStructure_AnvilBench_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_AnvilBench_C*>(UPrimalItemStructure_AnvilBench_C::StaticClass()->DefaultObject);

	return Default;
}

}


