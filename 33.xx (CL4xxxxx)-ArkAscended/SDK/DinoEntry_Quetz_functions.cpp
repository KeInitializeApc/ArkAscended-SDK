#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Quetz.DinoEntry_Quetz_C
// (None)

class UClass* UDinoEntry_Quetz_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Quetz_C");

	return Clss;
}


// DinoEntry_Quetz_C DinoEntry_Quetz.Default__DinoEntry_Quetz_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Quetz_C* UDinoEntry_Quetz_C::GetDefaultObj()
{
	static class UDinoEntry_Quetz_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Quetz_C*>(UDinoEntry_Quetz_C::StaticClass()->DefaultObject);

	return Default;
}

}


