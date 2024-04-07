#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Galli.DinoEntry_Galli_C
// (None)

class UClass* UDinoEntry_Galli_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Galli_C");

	return Clss;
}


// DinoEntry_Galli_C DinoEntry_Galli.Default__DinoEntry_Galli_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Galli_C* UDinoEntry_Galli_C::GetDefaultObj()
{
	static class UDinoEntry_Galli_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Galli_C*>(UDinoEntry_Galli_C::StaticClass()->DefaultObject);

	return Default;
}

}


