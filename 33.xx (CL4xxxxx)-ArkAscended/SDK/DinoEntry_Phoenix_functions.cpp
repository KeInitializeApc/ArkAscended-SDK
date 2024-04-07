#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Phoenix.DinoEntry_Phoenix_C
// (None)

class UClass* UDinoEntry_Phoenix_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Phoenix_C");

	return Clss;
}


// DinoEntry_Phoenix_C DinoEntry_Phoenix.Default__DinoEntry_Phoenix_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Phoenix_C* UDinoEntry_Phoenix_C::GetDefaultObj()
{
	static class UDinoEntry_Phoenix_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Phoenix_C*>(UDinoEntry_Phoenix_C::StaticClass()->DefaultObject);

	return Default;
}

}


