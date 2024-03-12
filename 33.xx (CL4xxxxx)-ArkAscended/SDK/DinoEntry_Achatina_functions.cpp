#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Achatina.DinoEntry_Achatina_C
// (None)

class UClass* UDinoEntry_Achatina_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Achatina_C");

	return Clss;
}


// DinoEntry_Achatina_C DinoEntry_Achatina.Default__DinoEntry_Achatina_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Achatina_C* UDinoEntry_Achatina_C::GetDefaultObj()
{
	static class UDinoEntry_Achatina_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Achatina_C*>(UDinoEntry_Achatina_C::StaticClass()->DefaultObject);

	return Default;
}

}


