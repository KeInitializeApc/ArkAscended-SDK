#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_AlarmTrap.EngramEntry_AlarmTrap_C
// (None)

class UClass* UEngramEntry_AlarmTrap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_AlarmTrap_C");

	return Clss;
}


// EngramEntry_AlarmTrap_C EngramEntry_AlarmTrap.Default__EngramEntry_AlarmTrap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_AlarmTrap_C* UEngramEntry_AlarmTrap_C::GetDefaultObj()
{
	static class UEngramEntry_AlarmTrap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_AlarmTrap_C*>(UEngramEntry_AlarmTrap_C::StaticClass()->DefaultObject);

	return Default;
}

}


