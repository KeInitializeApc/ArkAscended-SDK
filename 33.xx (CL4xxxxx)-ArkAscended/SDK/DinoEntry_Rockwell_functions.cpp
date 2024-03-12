#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Rockwell.DinoEntry_Rockwell_C
// (None)

class UClass* UDinoEntry_Rockwell_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Rockwell_C");

	return Clss;
}


// DinoEntry_Rockwell_C DinoEntry_Rockwell.Default__DinoEntry_Rockwell_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Rockwell_C* UDinoEntry_Rockwell_C::GetDefaultObj()
{
	static class UDinoEntry_Rockwell_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Rockwell_C*>(UDinoEntry_Rockwell_C::StaticClass()->DefaultObject);

	return Default;
}

}


