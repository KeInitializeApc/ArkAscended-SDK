#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Direwolf.DinoEntry_Direwolf_C
// (None)

class UClass* UDinoEntry_Direwolf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Direwolf_C");

	return Clss;
}


// DinoEntry_Direwolf_C DinoEntry_Direwolf.Default__DinoEntry_Direwolf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Direwolf_C* UDinoEntry_Direwolf_C::GetDefaultObj()
{
	static class UDinoEntry_Direwolf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Direwolf_C*>(UDinoEntry_Direwolf_C::StaticClass()->DefaultObject);

	return Default;
}

}


