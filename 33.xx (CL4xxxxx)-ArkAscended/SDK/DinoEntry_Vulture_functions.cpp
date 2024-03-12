#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Vulture.DinoEntry_Vulture_C
// (None)

class UClass* UDinoEntry_Vulture_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Vulture_C");

	return Clss;
}


// DinoEntry_Vulture_C DinoEntry_Vulture.Default__DinoEntry_Vulture_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Vulture_C* UDinoEntry_Vulture_C::GetDefaultObj()
{
	static class UDinoEntry_Vulture_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Vulture_C*>(UDinoEntry_Vulture_C::StaticClass()->DefaultObject);

	return Default;
}

}


