#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Turkey.DinoEntry_Turkey_C
// (None)

class UClass* UDinoEntry_Turkey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Turkey_C");

	return Clss;
}


// DinoEntry_Turkey_C DinoEntry_Turkey.Default__DinoEntry_Turkey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Turkey_C* UDinoEntry_Turkey_C::GetDefaultObj()
{
	static class UDinoEntry_Turkey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Turkey_C*>(UDinoEntry_Turkey_C::StaticClass()->DefaultObject);

	return Default;
}

}


