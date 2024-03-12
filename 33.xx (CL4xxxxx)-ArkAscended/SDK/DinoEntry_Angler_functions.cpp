#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Angler.DinoEntry_Angler_C
// (None)

class UClass* UDinoEntry_Angler_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Angler_C");

	return Clss;
}


// DinoEntry_Angler_C DinoEntry_Angler.Default__DinoEntry_Angler_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Angler_C* UDinoEntry_Angler_C::GetDefaultObj()
{
	static class UDinoEntry_Angler_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Angler_C*>(UDinoEntry_Angler_C::StaticClass()->DefaultObject);

	return Default;
}

}


