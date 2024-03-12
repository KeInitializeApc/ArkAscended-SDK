#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Kaprosuchus.DinoEntry_Kaprosuchus_C
// (None)

class UClass* UDinoEntry_Kaprosuchus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Kaprosuchus_C");

	return Clss;
}


// DinoEntry_Kaprosuchus_C DinoEntry_Kaprosuchus.Default__DinoEntry_Kaprosuchus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Kaprosuchus_C* UDinoEntry_Kaprosuchus_C::GetDefaultObj()
{
	static class UDinoEntry_Kaprosuchus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Kaprosuchus_C*>(UDinoEntry_Kaprosuchus_C::StaticClass()->DefaultObject);

	return Default;
}

}


