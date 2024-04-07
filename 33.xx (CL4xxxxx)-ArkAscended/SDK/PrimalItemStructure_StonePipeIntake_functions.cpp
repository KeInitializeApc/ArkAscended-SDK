#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_StonePipeIntake.PrimalItemStructure_StonePipeIntake_C
// (None)

class UClass* UPrimalItemStructure_StonePipeIntake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_StonePipeIntake_C");

	return Clss;
}


// PrimalItemStructure_StonePipeIntake_C PrimalItemStructure_StonePipeIntake.Default__PrimalItemStructure_StonePipeIntake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_StonePipeIntake_C* UPrimalItemStructure_StonePipeIntake_C::GetDefaultObj()
{
	static class UPrimalItemStructure_StonePipeIntake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_StonePipeIntake_C*>(UPrimalItemStructure_StonePipeIntake_C::StaticClass()->DefaultObject);

	return Default;
}

}


