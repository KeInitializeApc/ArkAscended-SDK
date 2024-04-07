#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_SleepingBag_Base.PrimalItemStructure_SleepingBag_Base_C
// (None)

class UClass* UPrimalItemStructure_SleepingBag_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_SleepingBag_Base_C");

	return Clss;
}


// PrimalItemStructure_SleepingBag_Base_C PrimalItemStructure_SleepingBag_Base.Default__PrimalItemStructure_SleepingBag_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_SleepingBag_Base_C* UPrimalItemStructure_SleepingBag_Base_C::GetDefaultObj()
{
	static class UPrimalItemStructure_SleepingBag_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_SleepingBag_Base_C*>(UPrimalItemStructure_SleepingBag_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


