#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_Grinder.PrimalItemStructure_Grinder_C
// (None)

class UClass* UPrimalItemStructure_Grinder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_Grinder_C");

	return Clss;
}


// PrimalItemStructure_Grinder_C PrimalItemStructure_Grinder.Default__PrimalItemStructure_Grinder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_Grinder_C* UPrimalItemStructure_Grinder_C::GetDefaultObj()
{
	static class UPrimalItemStructure_Grinder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_Grinder_C*>(UPrimalItemStructure_Grinder_C::StaticClass()->DefaultObject);

	return Default;
}

}


