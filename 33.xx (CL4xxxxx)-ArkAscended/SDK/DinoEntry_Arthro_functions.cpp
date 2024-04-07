#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Arthro.DinoEntry_Arthro_C
// (None)

class UClass* UDinoEntry_Arthro_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Arthro_C");

	return Clss;
}


// DinoEntry_Arthro_C DinoEntry_Arthro.Default__DinoEntry_Arthro_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Arthro_C* UDinoEntry_Arthro_C::GetDefaultObj()
{
	static class UDinoEntry_Arthro_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Arthro_C*>(UDinoEntry_Arthro_C::StaticClass()->DefaultObject);

	return Default;
}

}


