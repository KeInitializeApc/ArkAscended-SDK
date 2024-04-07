#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Beetle.DinoEntry_Beetle_C
// (None)

class UClass* UDinoEntry_Beetle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Beetle_C");

	return Clss;
}


// DinoEntry_Beetle_C DinoEntry_Beetle.Default__DinoEntry_Beetle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Beetle_C* UDinoEntry_Beetle_C::GetDefaultObj()
{
	static class UDinoEntry_Beetle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Beetle_C*>(UDinoEntry_Beetle_C::StaticClass()->DefaultObject);

	return Default;
}

}


