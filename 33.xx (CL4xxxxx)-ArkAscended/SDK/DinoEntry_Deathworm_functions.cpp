#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Deathworm.DinoEntry_Deathworm_C
// (None)

class UClass* UDinoEntry_Deathworm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Deathworm_C");

	return Clss;
}


// DinoEntry_Deathworm_C DinoEntry_Deathworm.Default__DinoEntry_Deathworm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Deathworm_C* UDinoEntry_Deathworm_C::GetDefaultObj()
{
	static class UDinoEntry_Deathworm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Deathworm_C*>(UDinoEntry_Deathworm_C::StaticClass()->DefaultObject);

	return Default;
}

}


