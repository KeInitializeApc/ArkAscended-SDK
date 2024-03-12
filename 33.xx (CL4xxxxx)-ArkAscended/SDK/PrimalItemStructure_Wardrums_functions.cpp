#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_Wardrums.PrimalItemStructure_Wardrums_C
// (None)

class UClass* UPrimalItemStructure_Wardrums_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_Wardrums_C");

	return Clss;
}


// PrimalItemStructure_Wardrums_C PrimalItemStructure_Wardrums.Default__PrimalItemStructure_Wardrums_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_Wardrums_C* UPrimalItemStructure_Wardrums_C::GetDefaultObj()
{
	static class UPrimalItemStructure_Wardrums_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_Wardrums_C*>(UPrimalItemStructure_Wardrums_C::StaticClass()->DefaultObject);

	return Default;
}

}


