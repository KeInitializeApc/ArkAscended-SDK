#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Leech.DinoEntry_Leech_C
// (None)

class UClass* UDinoEntry_Leech_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Leech_C");

	return Clss;
}


// DinoEntry_Leech_C DinoEntry_Leech.Default__DinoEntry_Leech_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Leech_C* UDinoEntry_Leech_C::GetDefaultObj()
{
	static class UDinoEntry_Leech_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Leech_C*>(UDinoEntry_Leech_C::StaticClass()->DefaultObject);

	return Default;
}

}


