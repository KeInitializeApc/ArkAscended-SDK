#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Toad.DinoEntry_Toad_C
// (None)

class UClass* UDinoEntry_Toad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Toad_C");

	return Clss;
}


// DinoEntry_Toad_C DinoEntry_Toad.Default__DinoEntry_Toad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Toad_C* UDinoEntry_Toad_C::GetDefaultObj()
{
	static class UDinoEntry_Toad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Toad_C*>(UDinoEntry_Toad_C::StaticClass()->DefaultObject);

	return Default;
}

}


