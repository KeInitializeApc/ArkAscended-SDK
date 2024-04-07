#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Turtle.DinoEntry_Turtle_C
// (None)

class UClass* UDinoEntry_Turtle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Turtle_C");

	return Clss;
}


// DinoEntry_Turtle_C DinoEntry_Turtle.Default__DinoEntry_Turtle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Turtle_C* UDinoEntry_Turtle_C::GetDefaultObj()
{
	static class UDinoEntry_Turtle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Turtle_C*>(UDinoEntry_Turtle_C::StaticClass()->DefaultObject);

	return Default;
}

}


