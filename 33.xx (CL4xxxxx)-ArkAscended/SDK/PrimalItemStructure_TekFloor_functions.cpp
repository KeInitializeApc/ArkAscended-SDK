#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TekFloor.PrimalItemStructure_TekFloor_C
// (None)

class UClass* UPrimalItemStructure_TekFloor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TekFloor_C");

	return Clss;
}


// PrimalItemStructure_TekFloor_C PrimalItemStructure_TekFloor.Default__PrimalItemStructure_TekFloor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TekFloor_C* UPrimalItemStructure_TekFloor_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TekFloor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TekFloor_C*>(UPrimalItemStructure_TekFloor_C::StaticClass()->DefaultObject);

	return Default;
}

}


