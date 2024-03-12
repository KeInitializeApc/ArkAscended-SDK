#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Brainslug.DinoEntry_Brainslug_C
// (None)

class UClass* UDinoEntry_Brainslug_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Brainslug_C");

	return Clss;
}


// DinoEntry_Brainslug_C DinoEntry_Brainslug.Default__DinoEntry_Brainslug_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Brainslug_C* UDinoEntry_Brainslug_C::GetDefaultObj()
{
	static class UDinoEntry_Brainslug_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Brainslug_C*>(UDinoEntry_Brainslug_C::StaticClass()->DefaultObject);

	return Default;
}

}


