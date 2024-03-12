#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Bat.DinoEntry_Bat_C
// (None)

class UClass* UDinoEntry_Bat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Bat_C");

	return Clss;
}


// DinoEntry_Bat_C DinoEntry_Bat.Default__DinoEntry_Bat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Bat_C* UDinoEntry_Bat_C::GetDefaultObj()
{
	static class UDinoEntry_Bat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Bat_C*>(UDinoEntry_Bat_C::StaticClass()->DefaultObject);

	return Default;
}

}


