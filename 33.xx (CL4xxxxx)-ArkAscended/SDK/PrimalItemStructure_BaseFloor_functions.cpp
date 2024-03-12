#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_BaseFloor.PrimalItemStructure_BaseFloor_C
// (None)

class UClass* UPrimalItemStructure_BaseFloor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_BaseFloor_C");

	return Clss;
}


// PrimalItemStructure_BaseFloor_C PrimalItemStructure_BaseFloor.Default__PrimalItemStructure_BaseFloor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_BaseFloor_C* UPrimalItemStructure_BaseFloor_C::GetDefaultObj()
{
	static class UPrimalItemStructure_BaseFloor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_BaseFloor_C*>(UPrimalItemStructure_BaseFloor_C::StaticClass()->DefaultObject);

	return Default;
}

}


