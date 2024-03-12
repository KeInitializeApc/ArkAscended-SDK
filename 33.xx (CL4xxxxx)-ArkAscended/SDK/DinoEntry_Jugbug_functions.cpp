#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Jugbug.DinoEntry_Jugbug_C
// (None)

class UClass* UDinoEntry_Jugbug_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Jugbug_C");

	return Clss;
}


// DinoEntry_Jugbug_C DinoEntry_Jugbug.Default__DinoEntry_Jugbug_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Jugbug_C* UDinoEntry_Jugbug_C::GetDefaultObj()
{
	static class UDinoEntry_Jugbug_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Jugbug_C*>(UDinoEntry_Jugbug_C::StaticClass()->DefaultObject);

	return Default;
}

}


