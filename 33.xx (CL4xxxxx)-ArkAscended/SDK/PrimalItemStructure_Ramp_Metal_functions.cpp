#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_Ramp_Metal.PrimalItemStructure_Ramp_Metal_C
// (None)

class UClass* UPrimalItemStructure_Ramp_Metal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_Ramp_Metal_C");

	return Clss;
}


// PrimalItemStructure_Ramp_Metal_C PrimalItemStructure_Ramp_Metal.Default__PrimalItemStructure_Ramp_Metal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_Ramp_Metal_C* UPrimalItemStructure_Ramp_Metal_C::GetDefaultObj()
{
	static class UPrimalItemStructure_Ramp_Metal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_Ramp_Metal_C*>(UPrimalItemStructure_Ramp_Metal_C::StaticClass()->DefaultObject);

	return Default;
}

}


