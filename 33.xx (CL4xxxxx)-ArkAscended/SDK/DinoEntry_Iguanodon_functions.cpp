#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Iguanodon.DinoEntry_Iguanodon_C
// (None)

class UClass* UDinoEntry_Iguanodon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Iguanodon_C");

	return Clss;
}


// DinoEntry_Iguanodon_C DinoEntry_Iguanodon.Default__DinoEntry_Iguanodon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Iguanodon_C* UDinoEntry_Iguanodon_C::GetDefaultObj()
{
	static class UDinoEntry_Iguanodon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Iguanodon_C*>(UDinoEntry_Iguanodon_C::StaticClass()->DefaultObject);

	return Default;
}

}


