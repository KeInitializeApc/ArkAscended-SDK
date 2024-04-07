#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Tusoteuthis.DinoEntry_Tusoteuthis_C
// (None)

class UClass* UDinoEntry_Tusoteuthis_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Tusoteuthis_C");

	return Clss;
}


// DinoEntry_Tusoteuthis_C DinoEntry_Tusoteuthis.Default__DinoEntry_Tusoteuthis_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Tusoteuthis_C* UDinoEntry_Tusoteuthis_C::GetDefaultObj()
{
	static class UDinoEntry_Tusoteuthis_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Tusoteuthis_C*>(UDinoEntry_Tusoteuthis_C::StaticClass()->DefaultObject);

	return Default;
}

}


