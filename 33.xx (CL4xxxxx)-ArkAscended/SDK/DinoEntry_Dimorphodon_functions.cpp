#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Dimorphodon.DinoEntry_Dimorphodon_C
// (None)

class UClass* UDinoEntry_Dimorphodon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Dimorphodon_C");

	return Clss;
}


// DinoEntry_Dimorphodon_C DinoEntry_Dimorphodon.Default__DinoEntry_Dimorphodon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Dimorphodon_C* UDinoEntry_Dimorphodon_C::GetDefaultObj()
{
	static class UDinoEntry_Dimorphodon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Dimorphodon_C*>(UDinoEntry_Dimorphodon_C::StaticClass()->DefaultObject);

	return Default;
}

}


