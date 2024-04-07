#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_BaseDoor.PrimalItemStructure_BaseDoor_C
// (None)

class UClass* UPrimalItemStructure_BaseDoor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_BaseDoor_C");

	return Clss;
}


// PrimalItemStructure_BaseDoor_C PrimalItemStructure_BaseDoor.Default__PrimalItemStructure_BaseDoor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_BaseDoor_C* UPrimalItemStructure_BaseDoor_C::GetDefaultObj()
{
	static class UPrimalItemStructure_BaseDoor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_BaseDoor_C*>(UPrimalItemStructure_BaseDoor_C::StaticClass()->DefaultObject);

	return Default;
}

}


