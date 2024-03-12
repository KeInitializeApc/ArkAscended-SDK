#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Anky.DinoEntry_Anky_C
// (None)

class UClass* UDinoEntry_Anky_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Anky_C");

	return Clss;
}


// DinoEntry_Anky_C DinoEntry_Anky.Default__DinoEntry_Anky_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Anky_C* UDinoEntry_Anky_C::GetDefaultObj()
{
	static class UDinoEntry_Anky_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Anky_C*>(UDinoEntry_Anky_C::StaticClass()->DefaultObject);

	return Default;
}

}


