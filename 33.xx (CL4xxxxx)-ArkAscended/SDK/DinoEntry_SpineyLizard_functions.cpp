#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_SpineyLizard.DinoEntry_SpineyLizard_C
// (None)

class UClass* UDinoEntry_SpineyLizard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_SpineyLizard_C");

	return Clss;
}


// DinoEntry_SpineyLizard_C DinoEntry_SpineyLizard.Default__DinoEntry_SpineyLizard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_SpineyLizard_C* UDinoEntry_SpineyLizard_C::GetDefaultObj()
{
	static class UDinoEntry_SpineyLizard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_SpineyLizard_C*>(UDinoEntry_SpineyLizard_C::StaticClass()->DefaultObject);

	return Default;
}

}


