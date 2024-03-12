#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_BaseTrapdoor.PrimalItemStructure_BaseTrapdoor_C
// (None)

class UClass* UPrimalItemStructure_BaseTrapdoor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_BaseTrapdoor_C");

	return Clss;
}


// PrimalItemStructure_BaseTrapdoor_C PrimalItemStructure_BaseTrapdoor.Default__PrimalItemStructure_BaseTrapdoor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_BaseTrapdoor_C* UPrimalItemStructure_BaseTrapdoor_C::GetDefaultObj()
{
	static class UPrimalItemStructure_BaseTrapdoor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_BaseTrapdoor_C*>(UPrimalItemStructure_BaseTrapdoor_C::StaticClass()->DefaultObject);

	return Default;
}

}


