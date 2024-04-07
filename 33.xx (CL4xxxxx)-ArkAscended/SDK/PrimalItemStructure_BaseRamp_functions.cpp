#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_BaseRamp.PrimalItemStructure_BaseRamp_C
// (None)

class UClass* UPrimalItemStructure_BaseRamp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_BaseRamp_C");

	return Clss;
}


// PrimalItemStructure_BaseRamp_C PrimalItemStructure_BaseRamp.Default__PrimalItemStructure_BaseRamp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_BaseRamp_C* UPrimalItemStructure_BaseRamp_C::GetDefaultObj()
{
	static class UPrimalItemStructure_BaseRamp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_BaseRamp_C*>(UPrimalItemStructure_BaseRamp_C::StaticClass()->DefaultObject);

	return Default;
}

}


