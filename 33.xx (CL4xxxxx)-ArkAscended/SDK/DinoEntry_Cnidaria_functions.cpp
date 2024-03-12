#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Cnidaria.DinoEntry_Cnidaria_C
// (None)

class UClass* UDinoEntry_Cnidaria_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Cnidaria_C");

	return Clss;
}


// DinoEntry_Cnidaria_C DinoEntry_Cnidaria.Default__DinoEntry_Cnidaria_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Cnidaria_C* UDinoEntry_Cnidaria_C::GetDefaultObj()
{
	static class UDinoEntry_Cnidaria_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Cnidaria_C*>(UDinoEntry_Cnidaria_C::StaticClass()->DefaultObject);

	return Default;
}

}


