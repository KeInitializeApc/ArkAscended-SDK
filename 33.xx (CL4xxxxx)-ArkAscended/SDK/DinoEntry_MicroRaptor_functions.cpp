#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_MicroRaptor.DinoEntry_MicroRaptor_C
// (None)

class UClass* UDinoEntry_MicroRaptor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_MicroRaptor_C");

	return Clss;
}


// DinoEntry_MicroRaptor_C DinoEntry_MicroRaptor.Default__DinoEntry_MicroRaptor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_MicroRaptor_C* UDinoEntry_MicroRaptor_C::GetDefaultObj()
{
	static class UDinoEntry_MicroRaptor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_MicroRaptor_C*>(UDinoEntry_MicroRaptor_C::StaticClass()->DefaultObject);

	return Default;
}

}


