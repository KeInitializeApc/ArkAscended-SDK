#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_Bed_Simple.PrimalItemStructure_Bed_Simple_C
// (None)

class UClass* UPrimalItemStructure_Bed_Simple_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_Bed_Simple_C");

	return Clss;
}


// PrimalItemStructure_Bed_Simple_C PrimalItemStructure_Bed_Simple.Default__PrimalItemStructure_Bed_Simple_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_Bed_Simple_C* UPrimalItemStructure_Bed_Simple_C::GetDefaultObj()
{
	static class UPrimalItemStructure_Bed_Simple_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_Bed_Simple_C*>(UPrimalItemStructure_Bed_Simple_C::StaticClass()->DefaultObject);

	return Default;
}

}


