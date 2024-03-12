#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_LightBug.DinoEntry_LightBug_C
// (None)

class UClass* UDinoEntry_LightBug_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_LightBug_C");

	return Clss;
}


// DinoEntry_LightBug_C DinoEntry_LightBug.Default__DinoEntry_LightBug_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_LightBug_C* UDinoEntry_LightBug_C::GetDefaultObj()
{
	static class UDinoEntry_LightBug_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_LightBug_C*>(UDinoEntry_LightBug_C::StaticClass()->DefaultObject);

	return Default;
}

}


