#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_BaseGate.PrimalItemStructure_BaseGate_C
// (None)

class UClass* UPrimalItemStructure_BaseGate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_BaseGate_C");

	return Clss;
}


// PrimalItemStructure_BaseGate_C PrimalItemStructure_BaseGate.Default__PrimalItemStructure_BaseGate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_BaseGate_C* UPrimalItemStructure_BaseGate_C::GetDefaultObj()
{
	static class UPrimalItemStructure_BaseGate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_BaseGate_C*>(UPrimalItemStructure_BaseGate_C::StaticClass()->DefaultObject);

	return Default;
}

}


