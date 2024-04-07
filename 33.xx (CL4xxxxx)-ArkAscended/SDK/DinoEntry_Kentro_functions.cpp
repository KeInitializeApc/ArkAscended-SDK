#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Kentro.DinoEntry_Kentro_C
// (None)

class UClass* UDinoEntry_Kentro_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Kentro_C");

	return Clss;
}


// DinoEntry_Kentro_C DinoEntry_Kentro.Default__DinoEntry_Kentro_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Kentro_C* UDinoEntry_Kentro_C::GetDefaultObj()
{
	static class UDinoEntry_Kentro_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Kentro_C*>(UDinoEntry_Kentro_C::StaticClass()->DefaultObject);

	return Default;
}

}


