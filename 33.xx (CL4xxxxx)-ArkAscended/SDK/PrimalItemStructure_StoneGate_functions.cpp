#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_StoneGate.PrimalItemStructure_StoneGate_C
// (None)

class UClass* UPrimalItemStructure_StoneGate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_StoneGate_C");

	return Clss;
}


// PrimalItemStructure_StoneGate_C PrimalItemStructure_StoneGate.Default__PrimalItemStructure_StoneGate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_StoneGate_C* UPrimalItemStructure_StoneGate_C::GetDefaultObj()
{
	static class UPrimalItemStructure_StoneGate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_StoneGate_C*>(UPrimalItemStructure_StoneGate_C::StaticClass()->DefaultObject);

	return Default;
}

}


