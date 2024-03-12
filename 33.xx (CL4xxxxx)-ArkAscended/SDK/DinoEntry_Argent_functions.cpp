#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Argent.DinoEntry_Argent_C
// (None)

class UClass* UDinoEntry_Argent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Argent_C");

	return Clss;
}


// DinoEntry_Argent_C DinoEntry_Argent.Default__DinoEntry_Argent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Argent_C* UDinoEntry_Argent_C::GetDefaultObj()
{
	static class UDinoEntry_Argent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Argent_C*>(UDinoEntry_Argent_C::StaticClass()->DefaultObject);

	return Default;
}

}


