#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Otter.DinoEntry_Otter_C
// (None)

class UClass* UDinoEntry_Otter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Otter_C");

	return Clss;
}


// DinoEntry_Otter_C DinoEntry_Otter.Default__DinoEntry_Otter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Otter_C* UDinoEntry_Otter_C::GetDefaultObj()
{
	static class UDinoEntry_Otter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Otter_C*>(UDinoEntry_Otter_C::StaticClass()->DefaultObject);

	return Default;
}

}


