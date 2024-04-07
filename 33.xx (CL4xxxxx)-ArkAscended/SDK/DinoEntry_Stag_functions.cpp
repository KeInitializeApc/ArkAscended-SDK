#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Stag.DinoEntry_Stag_C
// (None)

class UClass* UDinoEntry_Stag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Stag_C");

	return Clss;
}


// DinoEntry_Stag_C DinoEntry_Stag.Default__DinoEntry_Stag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Stag_C* UDinoEntry_Stag_C::GetDefaultObj()
{
	static class UDinoEntry_Stag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Stag_C*>(UDinoEntry_Stag_C::StaticClass()->DefaultObject);

	return Default;
}

}


