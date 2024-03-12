#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_LanternPetPug.DinoEntry_LanternPetPug_C
// (None)

class UClass* UDinoEntry_LanternPetPug_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_LanternPetPug_C");

	return Clss;
}


// DinoEntry_LanternPetPug_C DinoEntry_LanternPetPug.Default__DinoEntry_LanternPetPug_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_LanternPetPug_C* UDinoEntry_LanternPetPug_C::GetDefaultObj()
{
	static class UDinoEntry_LanternPetPug_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_LanternPetPug_C*>(UDinoEntry_LanternPetPug_C::StaticClass()->DefaultObject);

	return Default;
}

}


