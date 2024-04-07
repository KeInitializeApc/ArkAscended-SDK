#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_WoodCage.PrimalItemStructure_WoodCage_C
// (None)

class UClass* UPrimalItemStructure_WoodCage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_WoodCage_C");

	return Clss;
}


// PrimalItemStructure_WoodCage_C PrimalItemStructure_WoodCage.Default__PrimalItemStructure_WoodCage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_WoodCage_C* UPrimalItemStructure_WoodCage_C::GetDefaultObj()
{
	static class UPrimalItemStructure_WoodCage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_WoodCage_C*>(UPrimalItemStructure_WoodCage_C::StaticClass()->DefaultObject);

	return Default;
}

}


