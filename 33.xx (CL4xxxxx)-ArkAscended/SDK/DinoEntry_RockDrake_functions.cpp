#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_RockDrake.DinoEntry_RockDrake_C
// (None)

class UClass* UDinoEntry_RockDrake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_RockDrake_C");

	return Clss;
}


// DinoEntry_RockDrake_C DinoEntry_RockDrake.Default__DinoEntry_RockDrake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_RockDrake_C* UDinoEntry_RockDrake_C::GetDefaultObj()
{
	static class UDinoEntry_RockDrake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_RockDrake_C*>(UDinoEntry_RockDrake_C::StaticClass()->DefaultObject);

	return Default;
}

}


