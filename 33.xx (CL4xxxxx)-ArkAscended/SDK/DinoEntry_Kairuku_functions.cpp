#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Kairuku.DinoEntry_Kairuku_C
// (None)

class UClass* UDinoEntry_Kairuku_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Kairuku_C");

	return Clss;
}


// DinoEntry_Kairuku_C DinoEntry_Kairuku.Default__DinoEntry_Kairuku_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Kairuku_C* UDinoEntry_Kairuku_C::GetDefaultObj()
{
	static class UDinoEntry_Kairuku_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Kairuku_C*>(UDinoEntry_Kairuku_C::StaticClass()->DefaultObject);

	return Default;
}

}


