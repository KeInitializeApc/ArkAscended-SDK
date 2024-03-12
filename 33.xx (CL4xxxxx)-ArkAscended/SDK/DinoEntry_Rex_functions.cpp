#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Rex.DinoEntry_Rex_C
// (None)

class UClass* UDinoEntry_Rex_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Rex_C");

	return Clss;
}


// DinoEntry_Rex_C DinoEntry_Rex.Default__DinoEntry_Rex_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Rex_C* UDinoEntry_Rex_C::GetDefaultObj()
{
	static class UDinoEntry_Rex_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Rex_C*>(UDinoEntry_Rex_C::StaticClass()->DefaultObject);

	return Default;
}

}


