#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Hesperornis.DinoEntry_Hesperornis_C
// (None)

class UClass* UDinoEntry_Hesperornis_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Hesperornis_C");

	return Clss;
}


// DinoEntry_Hesperornis_C DinoEntry_Hesperornis.Default__DinoEntry_Hesperornis_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Hesperornis_C* UDinoEntry_Hesperornis_C::GetDefaultObj()
{
	static class UDinoEntry_Hesperornis_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Hesperornis_C*>(UDinoEntry_Hesperornis_C::StaticClass()->DefaultObject);

	return Default;
}

}


