#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Mantis.DinoEntry_Mantis_C
// (None)

class UClass* UDinoEntry_Mantis_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Mantis_C");

	return Clss;
}


// DinoEntry_Mantis_C DinoEntry_Mantis.Default__DinoEntry_Mantis_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Mantis_C* UDinoEntry_Mantis_C::GetDefaultObj()
{
	static class UDinoEntry_Mantis_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Mantis_C*>(UDinoEntry_Mantis_C::StaticClass()->DefaultObject);

	return Default;
}

}


