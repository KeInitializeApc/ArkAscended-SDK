#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_Campfire.PrimalItemStructure_Campfire_C
// (None)

class UClass* UPrimalItemStructure_Campfire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_Campfire_C");

	return Clss;
}


// PrimalItemStructure_Campfire_C PrimalItemStructure_Campfire.Default__PrimalItemStructure_Campfire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_Campfire_C* UPrimalItemStructure_Campfire_C::GetDefaultObj()
{
	static class UPrimalItemStructure_Campfire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_Campfire_C*>(UPrimalItemStructure_Campfire_C::StaticClass()->DefaultObject);

	return Default;
}

}


