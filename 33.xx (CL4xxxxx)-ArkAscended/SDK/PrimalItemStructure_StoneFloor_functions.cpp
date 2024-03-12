#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_StoneFloor.PrimalItemStructure_StoneFloor_C
// (None)

class UClass* UPrimalItemStructure_StoneFloor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_StoneFloor_C");

	return Clss;
}


// PrimalItemStructure_StoneFloor_C PrimalItemStructure_StoneFloor.Default__PrimalItemStructure_StoneFloor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_StoneFloor_C* UPrimalItemStructure_StoneFloor_C::GetDefaultObj()
{
	static class UPrimalItemStructure_StoneFloor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_StoneFloor_C*>(UPrimalItemStructure_StoneFloor_C::StaticClass()->DefaultObject);

	return Default;
}

}


