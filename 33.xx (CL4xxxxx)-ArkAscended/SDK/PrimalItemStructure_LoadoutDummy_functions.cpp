#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_LoadoutDummy.PrimalItemStructure_LoadoutDummy_C
// (None)

class UClass* UPrimalItemStructure_LoadoutDummy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_LoadoutDummy_C");

	return Clss;
}


// PrimalItemStructure_LoadoutDummy_C PrimalItemStructure_LoadoutDummy.Default__PrimalItemStructure_LoadoutDummy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_LoadoutDummy_C* UPrimalItemStructure_LoadoutDummy_C::GetDefaultObj()
{
	static class UPrimalItemStructure_LoadoutDummy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_LoadoutDummy_C*>(UPrimalItemStructure_LoadoutDummy_C::StaticClass()->DefaultObject);

	return Default;
}

}


