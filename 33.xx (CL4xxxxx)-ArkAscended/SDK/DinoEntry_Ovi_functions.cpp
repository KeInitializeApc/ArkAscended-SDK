#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Ovi.DinoEntry_Ovi_C
// (None)

class UClass* UDinoEntry_Ovi_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Ovi_C");

	return Clss;
}


// DinoEntry_Ovi_C DinoEntry_Ovi.Default__DinoEntry_Ovi_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Ovi_C* UDinoEntry_Ovi_C::GetDefaultObj()
{
	static class UDinoEntry_Ovi_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Ovi_C*>(UDinoEntry_Ovi_C::StaticClass()->DefaultObject);

	return Default;
}

}


