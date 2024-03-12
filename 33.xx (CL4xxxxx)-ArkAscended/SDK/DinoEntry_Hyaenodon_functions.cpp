#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Hyaenodon.DinoEntry_Hyaenodon_C
// (None)

class UClass* UDinoEntry_Hyaenodon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Hyaenodon_C");

	return Clss;
}


// DinoEntry_Hyaenodon_C DinoEntry_Hyaenodon.Default__DinoEntry_Hyaenodon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Hyaenodon_C* UDinoEntry_Hyaenodon_C::GetDefaultObj()
{
	static class UDinoEntry_Hyaenodon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Hyaenodon_C*>(UDinoEntry_Hyaenodon_C::StaticClass()->DefaultObject);

	return Default;
}

}


