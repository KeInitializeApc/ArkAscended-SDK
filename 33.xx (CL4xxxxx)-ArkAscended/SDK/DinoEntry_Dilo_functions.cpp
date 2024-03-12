#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Dilo.DinoEntry_Dilo_C
// (None)

class UClass* UDinoEntry_Dilo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Dilo_C");

	return Clss;
}


// DinoEntry_Dilo_C DinoEntry_Dilo.Default__DinoEntry_Dilo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Dilo_C* UDinoEntry_Dilo_C::GetDefaultObj()
{
	static class UDinoEntry_Dilo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Dilo_C*>(UDinoEntry_Dilo_C::StaticClass()->DefaultObject);

	return Default;
}

}


