#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Dragonfly.DinoEntry_Dragonfly_C
// (None)

class UClass* UDinoEntry_Dragonfly_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Dragonfly_C");

	return Clss;
}


// DinoEntry_Dragonfly_C DinoEntry_Dragonfly.Default__DinoEntry_Dragonfly_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Dragonfly_C* UDinoEntry_Dragonfly_C::GetDefaultObj()
{
	static class UDinoEntry_Dragonfly_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Dragonfly_C*>(UDinoEntry_Dragonfly_C::StaticClass()->DefaultObject);

	return Default;
}

}


