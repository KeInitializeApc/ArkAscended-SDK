#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Paracer.DinoEntry_Paracer_C
// (None)

class UClass* UDinoEntry_Paracer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Paracer_C");

	return Clss;
}


// DinoEntry_Paracer_C DinoEntry_Paracer.Default__DinoEntry_Paracer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Paracer_C* UDinoEntry_Paracer_C::GetDefaultObj()
{
	static class UDinoEntry_Paracer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Paracer_C*>(UDinoEntry_Paracer_C::StaticClass()->DefaultObject);

	return Default;
}

}


