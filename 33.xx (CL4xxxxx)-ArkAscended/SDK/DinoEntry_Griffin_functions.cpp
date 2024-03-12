#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Griffin.DinoEntry_Griffin_C
// (None)

class UClass* UDinoEntry_Griffin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Griffin_C");

	return Clss;
}


// DinoEntry_Griffin_C DinoEntry_Griffin.Default__DinoEntry_Griffin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Griffin_C* UDinoEntry_Griffin_C::GetDefaultObj()
{
	static class UDinoEntry_Griffin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Griffin_C*>(UDinoEntry_Griffin_C::StaticClass()->DefaultObject);

	return Default;
}

}


