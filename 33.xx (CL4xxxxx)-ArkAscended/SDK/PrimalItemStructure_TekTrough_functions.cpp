#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TekTrough.PrimalItemStructure_TekTrough_C
// (None)

class UClass* UPrimalItemStructure_TekTrough_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TekTrough_C");

	return Clss;
}


// PrimalItemStructure_TekTrough_C PrimalItemStructure_TekTrough.Default__PrimalItemStructure_TekTrough_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TekTrough_C* UPrimalItemStructure_TekTrough_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TekTrough_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TekTrough_C*>(UPrimalItemStructure_TekTrough_C::StaticClass()->DefaultObject);

	return Default;
}

}


