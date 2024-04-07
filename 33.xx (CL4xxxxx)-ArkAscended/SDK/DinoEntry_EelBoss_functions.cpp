#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_EelBoss.DinoEntry_EelBoss_C
// (None)

class UClass* UDinoEntry_EelBoss_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_EelBoss_C");

	return Clss;
}


// DinoEntry_EelBoss_C DinoEntry_EelBoss.Default__DinoEntry_EelBoss_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_EelBoss_C* UDinoEntry_EelBoss_C::GetDefaultObj()
{
	static class UDinoEntry_EelBoss_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_EelBoss_C*>(UDinoEntry_EelBoss_C::StaticClass()->DefaultObject);

	return Default;
}

}


