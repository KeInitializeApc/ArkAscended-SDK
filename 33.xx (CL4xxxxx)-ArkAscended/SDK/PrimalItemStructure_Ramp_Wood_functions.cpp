#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_Ramp_Wood.PrimalItemStructure_Ramp_Wood_C
// (None)

class UClass* UPrimalItemStructure_Ramp_Wood_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_Ramp_Wood_C");

	return Clss;
}


// PrimalItemStructure_Ramp_Wood_C PrimalItemStructure_Ramp_Wood.Default__PrimalItemStructure_Ramp_Wood_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_Ramp_Wood_C* UPrimalItemStructure_Ramp_Wood_C::GetDefaultObj()
{
	static class UPrimalItemStructure_Ramp_Wood_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_Ramp_Wood_C*>(UPrimalItemStructure_Ramp_Wood_C::StaticClass()->DefaultObject);

	return Default;
}

}


