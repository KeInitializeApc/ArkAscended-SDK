#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_CaveCrab.DinoEntry_CaveCrab_C
// (None)

class UClass* UDinoEntry_CaveCrab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_CaveCrab_C");

	return Clss;
}


// DinoEntry_CaveCrab_C DinoEntry_CaveCrab.Default__DinoEntry_CaveCrab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_CaveCrab_C* UDinoEntry_CaveCrab_C::GetDefaultObj()
{
	static class UDinoEntry_CaveCrab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_CaveCrab_C*>(UDinoEntry_CaveCrab_C::StaticClass()->DefaultObject);

	return Default;
}

}


