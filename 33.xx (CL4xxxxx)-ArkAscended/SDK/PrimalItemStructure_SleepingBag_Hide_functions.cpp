#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_SleepingBag_Hide.PrimalItemStructure_SleepingBag_Hide_C
// (None)

class UClass* UPrimalItemStructure_SleepingBag_Hide_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_SleepingBag_Hide_C");

	return Clss;
}


// PrimalItemStructure_SleepingBag_Hide_C PrimalItemStructure_SleepingBag_Hide.Default__PrimalItemStructure_SleepingBag_Hide_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_SleepingBag_Hide_C* UPrimalItemStructure_SleepingBag_Hide_C::GetDefaultObj()
{
	static class UPrimalItemStructure_SleepingBag_Hide_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_SleepingBag_Hide_C*>(UPrimalItemStructure_SleepingBag_Hide_C::StaticClass()->DefaultObject);

	return Default;
}

}


