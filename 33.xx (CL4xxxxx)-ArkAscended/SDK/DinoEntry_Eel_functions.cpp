#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Eel.DinoEntry_Eel_C
// (None)

class UClass* UDinoEntry_Eel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Eel_C");

	return Clss;
}


// DinoEntry_Eel_C DinoEntry_Eel.Default__DinoEntry_Eel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Eel_C* UDinoEntry_Eel_C::GetDefaultObj()
{
	static class UDinoEntry_Eel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Eel_C*>(UDinoEntry_Eel_C::StaticClass()->DefaultObject);

	return Default;
}

}


