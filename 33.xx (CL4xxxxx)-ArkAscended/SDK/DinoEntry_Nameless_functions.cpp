#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Nameless.DinoEntry_Nameless_C
// (None)

class UClass* UDinoEntry_Nameless_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Nameless_C");

	return Clss;
}


// DinoEntry_Nameless_C DinoEntry_Nameless.Default__DinoEntry_Nameless_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Nameless_C* UDinoEntry_Nameless_C::GetDefaultObj()
{
	static class UDinoEntry_Nameless_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Nameless_C*>(UDinoEntry_Nameless_C::StaticClass()->DefaultObject);

	return Default;
}

}


