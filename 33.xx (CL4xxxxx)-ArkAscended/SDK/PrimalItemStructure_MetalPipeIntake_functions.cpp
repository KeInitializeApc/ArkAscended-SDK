#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_MetalPipeIntake.PrimalItemStructure_MetalPipeIntake_C
// (None)

class UClass* UPrimalItemStructure_MetalPipeIntake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_MetalPipeIntake_C");

	return Clss;
}


// PrimalItemStructure_MetalPipeIntake_C PrimalItemStructure_MetalPipeIntake.Default__PrimalItemStructure_MetalPipeIntake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_MetalPipeIntake_C* UPrimalItemStructure_MetalPipeIntake_C::GetDefaultObj()
{
	static class UPrimalItemStructure_MetalPipeIntake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_MetalPipeIntake_C*>(UPrimalItemStructure_MetalPipeIntake_C::StaticClass()->DefaultObject);

	return Default;
}

}


