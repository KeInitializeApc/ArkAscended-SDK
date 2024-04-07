#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Pachy.DinoEntry_Pachy_C
// (None)

class UClass* UDinoEntry_Pachy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Pachy_C");

	return Clss;
}


// DinoEntry_Pachy_C DinoEntry_Pachy.Default__DinoEntry_Pachy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Pachy_C* UDinoEntry_Pachy_C::GetDefaultObj()
{
	static class UDinoEntry_Pachy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Pachy_C*>(UDinoEntry_Pachy_C::StaticClass()->DefaultObject);

	return Default;
}

}


