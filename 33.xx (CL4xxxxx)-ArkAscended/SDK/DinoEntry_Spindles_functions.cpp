#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Spindles.DinoEntry_Spindles_C
// (None)

class UClass* UDinoEntry_Spindles_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Spindles_C");

	return Clss;
}


// DinoEntry_Spindles_C DinoEntry_Spindles.Default__DinoEntry_Spindles_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Spindles_C* UDinoEntry_Spindles_C::GetDefaultObj()
{
	static class UDinoEntry_Spindles_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Spindles_C*>(UDinoEntry_Spindles_C::StaticClass()->DefaultObject);

	return Default;
}

}


