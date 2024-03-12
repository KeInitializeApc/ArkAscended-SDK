#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekAlarm.EngramEntry_TekAlarm_C
// (None)

class UClass* UEngramEntry_TekAlarm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekAlarm_C");

	return Clss;
}


// EngramEntry_TekAlarm_C EngramEntry_TekAlarm.Default__EngramEntry_TekAlarm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekAlarm_C* UEngramEntry_TekAlarm_C::GetDefaultObj()
{
	static class UEngramEntry_TekAlarm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekAlarm_C*>(UEngramEntry_TekAlarm_C::StaticClass()->DefaultObject);

	return Default;
}

}


