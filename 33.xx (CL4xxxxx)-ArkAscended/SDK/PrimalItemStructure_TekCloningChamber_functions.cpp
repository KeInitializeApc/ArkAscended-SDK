#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TekCloningChamber.PrimalItemStructure_TekCloningChamber_C
// (None)

class UClass* UPrimalItemStructure_TekCloningChamber_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TekCloningChamber_C");

	return Clss;
}


// PrimalItemStructure_TekCloningChamber_C PrimalItemStructure_TekCloningChamber.Default__PrimalItemStructure_TekCloningChamber_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TekCloningChamber_C* UPrimalItemStructure_TekCloningChamber_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TekCloningChamber_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TekCloningChamber_C*>(UPrimalItemStructure_TekCloningChamber_C::StaticClass()->DefaultObject);

	return Default;
}

}


