#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Monkey.DinoEntry_Monkey_C
// (None)

class UClass* UDinoEntry_Monkey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Monkey_C");

	return Clss;
}


// DinoEntry_Monkey_C DinoEntry_Monkey.Default__DinoEntry_Monkey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Monkey_C* UDinoEntry_Monkey_C::GetDefaultObj()
{
	static class UDinoEntry_Monkey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Monkey_C*>(UDinoEntry_Monkey_C::StaticClass()->DefaultObject);

	return Default;
}

}


