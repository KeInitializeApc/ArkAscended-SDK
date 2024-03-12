#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Baryonyx.DinoEntry_Baryonyx_C
// (None)

class UClass* UDinoEntry_Baryonyx_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Baryonyx_C");

	return Clss;
}


// DinoEntry_Baryonyx_C DinoEntry_Baryonyx.Default__DinoEntry_Baryonyx_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Baryonyx_C* UDinoEntry_Baryonyx_C::GetDefaultObj()
{
	static class UDinoEntry_Baryonyx_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Baryonyx_C*>(UDinoEntry_Baryonyx_C::StaticClass()->DefaultObject);

	return Default;
}

}


