#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_Tent.PrimalItemStructure_Tent_C
// (None)

class UClass* UPrimalItemStructure_Tent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_Tent_C");

	return Clss;
}


// PrimalItemStructure_Tent_C PrimalItemStructure_Tent.Default__PrimalItemStructure_Tent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_Tent_C* UPrimalItemStructure_Tent_C::GetDefaultObj()
{
	static class UPrimalItemStructure_Tent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_Tent_C*>(UPrimalItemStructure_Tent_C::StaticClass()->DefaultObject);

	return Default;
}

}


