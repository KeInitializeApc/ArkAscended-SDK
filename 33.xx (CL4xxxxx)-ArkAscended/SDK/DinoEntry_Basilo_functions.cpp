#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Basilo.DinoEntry_Basilo_C
// (None)

class UClass* UDinoEntry_Basilo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Basilo_C");

	return Clss;
}


// DinoEntry_Basilo_C DinoEntry_Basilo.Default__DinoEntry_Basilo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Basilo_C* UDinoEntry_Basilo_C::GetDefaultObj()
{
	static class UDinoEntry_Basilo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Basilo_C*>(UDinoEntry_Basilo_C::StaticClass()->DefaultObject);

	return Default;
}

}


