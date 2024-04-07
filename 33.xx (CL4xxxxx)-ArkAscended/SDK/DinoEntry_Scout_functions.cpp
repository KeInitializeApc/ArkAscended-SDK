#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Scout.DinoEntry_Scout_C
// (None)

class UClass* UDinoEntry_Scout_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Scout_C");

	return Clss;
}


// DinoEntry_Scout_C DinoEntry_Scout.Default__DinoEntry_Scout_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Scout_C* UDinoEntry_Scout_C::GetDefaultObj()
{
	static class UDinoEntry_Scout_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Scout_C*>(UDinoEntry_Scout_C::StaticClass()->DefaultObject);

	return Default;
}

}


