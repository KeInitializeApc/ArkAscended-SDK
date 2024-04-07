#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Gorilla.DinoEntry_Gorilla_C
// (None)

class UClass* UDinoEntry_Gorilla_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Gorilla_C");

	return Clss;
}


// DinoEntry_Gorilla_C DinoEntry_Gorilla.Default__DinoEntry_Gorilla_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Gorilla_C* UDinoEntry_Gorilla_C::GetDefaultObj()
{
	static class UDinoEntry_Gorilla_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Gorilla_C*>(UDinoEntry_Gorilla_C::StaticClass()->DefaultObject);

	return Default;
}

}


