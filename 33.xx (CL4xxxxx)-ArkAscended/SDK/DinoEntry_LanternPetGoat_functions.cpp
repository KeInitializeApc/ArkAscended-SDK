#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_LanternPetGoat.DinoEntry_LanternPetGoat_C
// (None)

class UClass* UDinoEntry_LanternPetGoat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_LanternPetGoat_C");

	return Clss;
}


// DinoEntry_LanternPetGoat_C DinoEntry_LanternPetGoat.Default__DinoEntry_LanternPetGoat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_LanternPetGoat_C* UDinoEntry_LanternPetGoat_C::GetDefaultObj()
{
	static class UDinoEntry_LanternPetGoat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_LanternPetGoat_C*>(UDinoEntry_LanternPetGoat_C::StaticClass()->DefaultObject);

	return Default;
}

}


