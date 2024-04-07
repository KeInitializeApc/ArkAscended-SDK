#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Piranha.DinoEntry_Piranha_C
// (None)

class UClass* UDinoEntry_Piranha_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Piranha_C");

	return Clss;
}


// DinoEntry_Piranha_C DinoEntry_Piranha.Default__DinoEntry_Piranha_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Piranha_C* UDinoEntry_Piranha_C::GetDefaultObj()
{
	static class UDinoEntry_Piranha_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Piranha_C*>(UDinoEntry_Piranha_C::StaticClass()->DefaultObject);

	return Default;
}

}


