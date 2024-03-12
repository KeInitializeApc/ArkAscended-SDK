#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_StoneDoor.PrimalItemStructure_StoneDoor_C
// (None)

class UClass* UPrimalItemStructure_StoneDoor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_StoneDoor_C");

	return Clss;
}


// PrimalItemStructure_StoneDoor_C PrimalItemStructure_StoneDoor.Default__PrimalItemStructure_StoneDoor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_StoneDoor_C* UPrimalItemStructure_StoneDoor_C::GetDefaultObj()
{
	static class UPrimalItemStructure_StoneDoor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_StoneDoor_C*>(UPrimalItemStructure_StoneDoor_C::StaticClass()->DefaultObject);

	return Default;
}

}


