#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Gasbags.DinoEntry_Gasbags_C
// (None)

class UClass* UDinoEntry_Gasbags_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Gasbags_C");

	return Clss;
}


// DinoEntry_Gasbags_C DinoEntry_Gasbags.Default__DinoEntry_Gasbags_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Gasbags_C* UDinoEntry_Gasbags_C::GetDefaultObj()
{
	static class UDinoEntry_Gasbags_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Gasbags_C*>(UDinoEntry_Gasbags_C::StaticClass()->DefaultObject);

	return Default;
}

}


