#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Pegomastax.DinoEntry_Pegomastax_C
// (None)

class UClass* UDinoEntry_Pegomastax_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Pegomastax_C");

	return Clss;
}


// DinoEntry_Pegomastax_C DinoEntry_Pegomastax.Default__DinoEntry_Pegomastax_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Pegomastax_C* UDinoEntry_Pegomastax_C::GetDefaultObj()
{
	static class UDinoEntry_Pegomastax_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Pegomastax_C*>(UDinoEntry_Pegomastax_C::StaticClass()->DefaultObject);

	return Default;
}

}


