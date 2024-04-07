#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_WindTurbine.PrimalItemStructure_WindTurbine_C
// (None)

class UClass* UPrimalItemStructure_WindTurbine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_WindTurbine_C");

	return Clss;
}


// PrimalItemStructure_WindTurbine_C PrimalItemStructure_WindTurbine.Default__PrimalItemStructure_WindTurbine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_WindTurbine_C* UPrimalItemStructure_WindTurbine_C::GetDefaultObj()
{
	static class UPrimalItemStructure_WindTurbine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_WindTurbine_C*>(UPrimalItemStructure_WindTurbine_C::StaticClass()->DefaultObject);

	return Default;
}

}


