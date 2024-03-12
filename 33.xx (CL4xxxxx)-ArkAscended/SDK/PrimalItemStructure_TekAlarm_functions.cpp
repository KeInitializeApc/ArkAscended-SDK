#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TekAlarm.PrimalItemStructure_TekAlarm_C
// (None)

class UClass* UPrimalItemStructure_TekAlarm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TekAlarm_C");

	return Clss;
}


// PrimalItemStructure_TekAlarm_C PrimalItemStructure_TekAlarm.Default__PrimalItemStructure_TekAlarm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TekAlarm_C* UPrimalItemStructure_TekAlarm_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TekAlarm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TekAlarm_C*>(UPrimalItemStructure_TekAlarm_C::StaticClass()->DefaultObject);

	return Default;
}

}


