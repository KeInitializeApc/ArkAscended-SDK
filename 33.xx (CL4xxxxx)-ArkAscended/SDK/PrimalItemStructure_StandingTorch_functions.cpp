#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_StandingTorch.PrimalItemStructure_StandingTorch_C
// (None)

class UClass* UPrimalItemStructure_StandingTorch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_StandingTorch_C");

	return Clss;
}


// PrimalItemStructure_StandingTorch_C PrimalItemStructure_StandingTorch.Default__PrimalItemStructure_StandingTorch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_StandingTorch_C* UPrimalItemStructure_StandingTorch_C::GetDefaultObj()
{
	static class UPrimalItemStructure_StandingTorch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_StandingTorch_C*>(UPrimalItemStructure_StandingTorch_C::StaticClass()->DefaultObject);

	return Default;
}

}


