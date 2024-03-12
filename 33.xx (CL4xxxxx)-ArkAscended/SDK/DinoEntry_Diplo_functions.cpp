#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Diplo.DinoEntry_Diplo_C
// (None)

class UClass* UDinoEntry_Diplo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Diplo_C");

	return Clss;
}


// DinoEntry_Diplo_C DinoEntry_Diplo.Default__DinoEntry_Diplo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Diplo_C* UDinoEntry_Diplo_C::GetDefaultObj()
{
	static class UDinoEntry_Diplo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Diplo_C*>(UDinoEntry_Diplo_C::StaticClass()->DefaultObject);

	return Default;
}

}


