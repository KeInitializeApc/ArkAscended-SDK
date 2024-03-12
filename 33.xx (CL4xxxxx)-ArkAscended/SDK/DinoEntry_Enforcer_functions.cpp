#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Enforcer.DinoEntry_Enforcer_C
// (None)

class UClass* UDinoEntry_Enforcer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Enforcer_C");

	return Clss;
}


// DinoEntry_Enforcer_C DinoEntry_Enforcer.Default__DinoEntry_Enforcer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Enforcer_C* UDinoEntry_Enforcer_C::GetDefaultObj()
{
	static class UDinoEntry_Enforcer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Enforcer_C*>(UDinoEntry_Enforcer_C::StaticClass()->DefaultObject);

	return Default;
}

}


