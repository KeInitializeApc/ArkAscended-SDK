#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_Grill.PrimalItemStructure_Grill_C
// (None)

class UClass* UPrimalItemStructure_Grill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_Grill_C");

	return Clss;
}


// PrimalItemStructure_Grill_C PrimalItemStructure_Grill.Default__PrimalItemStructure_Grill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_Grill_C* UPrimalItemStructure_Grill_C::GetDefaultObj()
{
	static class UPrimalItemStructure_Grill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_Grill_C*>(UPrimalItemStructure_Grill_C::StaticClass()->DefaultObject);

	return Default;
}

}


