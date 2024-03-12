#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Fjordhawk.DinoEntry_Fjordhawk_C
// (None)

class UClass* UDinoEntry_Fjordhawk_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Fjordhawk_C");

	return Clss;
}


// DinoEntry_Fjordhawk_C DinoEntry_Fjordhawk.Default__DinoEntry_Fjordhawk_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Fjordhawk_C* UDinoEntry_Fjordhawk_C::GetDefaultObj()
{
	static class UDinoEntry_Fjordhawk_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Fjordhawk_C*>(UDinoEntry_Fjordhawk_C::StaticClass()->DefaultObject);

	return Default;
}

}


