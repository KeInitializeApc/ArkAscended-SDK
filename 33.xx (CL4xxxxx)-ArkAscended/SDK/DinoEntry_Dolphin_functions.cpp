#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Dolphin.DinoEntry_Dolphin_C
// (None)

class UClass* UDinoEntry_Dolphin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Dolphin_C");

	return Clss;
}


// DinoEntry_Dolphin_C DinoEntry_Dolphin.Default__DinoEntry_Dolphin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Dolphin_C* UDinoEntry_Dolphin_C::GetDefaultObj()
{
	static class UDinoEntry_Dolphin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Dolphin_C*>(UDinoEntry_Dolphin_C::StaticClass()->DefaultObject);

	return Default;
}

}


