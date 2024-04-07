#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Basilisk.DinoEntry_Basilisk_C
// (None)

class UClass* UDinoEntry_Basilisk_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Basilisk_C");

	return Clss;
}


// DinoEntry_Basilisk_C DinoEntry_Basilisk.Default__DinoEntry_Basilisk_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Basilisk_C* UDinoEntry_Basilisk_C::GetDefaultObj()
{
	static class UDinoEntry_Basilisk_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Basilisk_C*>(UDinoEntry_Basilisk_C::StaticClass()->DefaultObject);

	return Default;
}

}


