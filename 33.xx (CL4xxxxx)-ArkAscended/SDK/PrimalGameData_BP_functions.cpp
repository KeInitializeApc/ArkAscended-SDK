#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalGameData_BP.PrimalGameData_BP_C
// (None)

class UClass* UPrimalGameData_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalGameData_BP_C");

	return Clss;
}


// PrimalGameData_BP_C PrimalGameData_BP.Default__PrimalGameData_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalGameData_BP_C* UPrimalGameData_BP_C::GetDefaultObj()
{
	static class UPrimalGameData_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalGameData_BP_C*>(UPrimalGameData_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


