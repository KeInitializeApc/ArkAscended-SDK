#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_GiantTurtle.DinoEntry_GiantTurtle_C
// (None)

class UClass* UDinoEntry_GiantTurtle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_GiantTurtle_C");

	return Clss;
}


// DinoEntry_GiantTurtle_C DinoEntry_GiantTurtle.Default__DinoEntry_GiantTurtle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_GiantTurtle_C* UDinoEntry_GiantTurtle_C::GetDefaultObj()
{
	static class UDinoEntry_GiantTurtle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_GiantTurtle_C*>(UDinoEntry_GiantTurtle_C::StaticClass()->DefaultObject);

	return Default;
}

}


