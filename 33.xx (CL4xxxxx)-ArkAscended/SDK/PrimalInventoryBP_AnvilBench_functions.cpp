#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalInventoryBP_AnvilBench.PrimalInventoryBP_AnvilBench_C
// (None)

class UClass* UPrimalInventoryBP_AnvilBench_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalInventoryBP_AnvilBench_C");

	return Clss;
}


// PrimalInventoryBP_AnvilBench_C PrimalInventoryBP_AnvilBench.Default__PrimalInventoryBP_AnvilBench_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalInventoryBP_AnvilBench_C* UPrimalInventoryBP_AnvilBench_C::GetDefaultObj()
{
	static class UPrimalInventoryBP_AnvilBench_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalInventoryBP_AnvilBench_C*>(UPrimalInventoryBP_AnvilBench_C::StaticClass()->DefaultObject);

	return Default;
}

}


