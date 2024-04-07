#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_LanternPetLizard.DinoEntry_LanternPetLizard_C
// (None)

class UClass* UDinoEntry_LanternPetLizard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_LanternPetLizard_C");

	return Clss;
}


// DinoEntry_LanternPetLizard_C DinoEntry_LanternPetLizard.Default__DinoEntry_LanternPetLizard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_LanternPetLizard_C* UDinoEntry_LanternPetLizard_C::GetDefaultObj()
{
	static class UDinoEntry_LanternPetLizard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_LanternPetLizard_C*>(UDinoEntry_LanternPetLizard_C::StaticClass()->DefaultObject);

	return Default;
}

}


