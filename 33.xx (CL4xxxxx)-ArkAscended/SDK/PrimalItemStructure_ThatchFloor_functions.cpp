#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_ThatchFloor.PrimalItemStructure_ThatchFloor_C
// (None)

class UClass* UPrimalItemStructure_ThatchFloor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_ThatchFloor_C");

	return Clss;
}


// PrimalItemStructure_ThatchFloor_C PrimalItemStructure_ThatchFloor.Default__PrimalItemStructure_ThatchFloor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_ThatchFloor_C* UPrimalItemStructure_ThatchFloor_C::GetDefaultObj()
{
	static class UPrimalItemStructure_ThatchFloor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_ThatchFloor_C*>(UPrimalItemStructure_ThatchFloor_C::StaticClass()->DefaultObject);

	return Default;
}

}


