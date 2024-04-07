#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Ant.DinoEntry_Ant_C
// (None)

class UClass* UDinoEntry_Ant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Ant_C");

	return Clss;
}


// DinoEntry_Ant_C DinoEntry_Ant.Default__DinoEntry_Ant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Ant_C* UDinoEntry_Ant_C::GetDefaultObj()
{
	static class UDinoEntry_Ant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Ant_C*>(UDinoEntry_Ant_C::StaticClass()->DefaultObject);

	return Default;
}

}


