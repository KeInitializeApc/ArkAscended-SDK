#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_WoodPillar.PrimalItemStructure_WoodPillar_C
// (None)

class UClass* UPrimalItemStructure_WoodPillar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_WoodPillar_C");

	return Clss;
}


// PrimalItemStructure_WoodPillar_C PrimalItemStructure_WoodPillar.Default__PrimalItemStructure_WoodPillar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_WoodPillar_C* UPrimalItemStructure_WoodPillar_C::GetDefaultObj()
{
	static class UPrimalItemStructure_WoodPillar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_WoodPillar_C*>(UPrimalItemStructure_WoodPillar_C::StaticClass()->DefaultObject);

	return Default;
}

}


