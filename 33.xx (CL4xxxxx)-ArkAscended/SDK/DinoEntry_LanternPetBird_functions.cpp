#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_LanternPetBird.DinoEntry_LanternPetBird_C
// (None)

class UClass* UDinoEntry_LanternPetBird_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_LanternPetBird_C");

	return Clss;
}


// DinoEntry_LanternPetBird_C DinoEntry_LanternPetBird.Default__DinoEntry_LanternPetBird_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_LanternPetBird_C* UDinoEntry_LanternPetBird_C::GetDefaultObj()
{
	static class UDinoEntry_LanternPetBird_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_LanternPetBird_C*>(UDinoEntry_LanternPetBird_C::StaticClass()->DefaultObject);

	return Default;
}

}


