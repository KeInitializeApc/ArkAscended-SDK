#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_AirConditioner.PrimalItemStructure_AirConditioner_C
// (None)

class UClass* UPrimalItemStructure_AirConditioner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_AirConditioner_C");

	return Clss;
}


// PrimalItemStructure_AirConditioner_C PrimalItemStructure_AirConditioner.Default__PrimalItemStructure_AirConditioner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_AirConditioner_C* UPrimalItemStructure_AirConditioner_C::GetDefaultObj()
{
	static class UPrimalItemStructure_AirConditioner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_AirConditioner_C*>(UPrimalItemStructure_AirConditioner_C::StaticClass()->DefaultObject);

	return Default;
}

}


