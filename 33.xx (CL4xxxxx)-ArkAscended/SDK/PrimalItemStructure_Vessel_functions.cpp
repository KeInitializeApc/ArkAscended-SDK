#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_Vessel.PrimalItemStructure_Vessel_C
// (None)

class UClass* UPrimalItemStructure_Vessel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_Vessel_C");

	return Clss;
}


// PrimalItemStructure_Vessel_C PrimalItemStructure_Vessel.Default__PrimalItemStructure_Vessel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_Vessel_C* UPrimalItemStructure_Vessel_C::GetDefaultObj()
{
	static class UPrimalItemStructure_Vessel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_Vessel_C*>(UPrimalItemStructure_Vessel_C::StaticClass()->DefaultObject);

	return Default;
}

}


