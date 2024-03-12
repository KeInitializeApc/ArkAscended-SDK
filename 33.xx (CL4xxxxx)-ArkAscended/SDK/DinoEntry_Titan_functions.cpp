#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Titan.DinoEntry_Titan_C
// (None)

class UClass* UDinoEntry_Titan_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Titan_C");

	return Clss;
}


// DinoEntry_Titan_C DinoEntry_Titan.Default__DinoEntry_Titan_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Titan_C* UDinoEntry_Titan_C::GetDefaultObj()
{
	static class UDinoEntry_Titan_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Titan_C*>(UDinoEntry_Titan_C::StaticClass()->DefaultObject);

	return Default;
}

}


