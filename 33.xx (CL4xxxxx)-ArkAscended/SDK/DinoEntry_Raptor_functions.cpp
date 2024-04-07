#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Raptor.DinoEntry_Raptor_C
// (None)

class UClass* UDinoEntry_Raptor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Raptor_C");

	return Clss;
}


// DinoEntry_Raptor_C DinoEntry_Raptor.Default__DinoEntry_Raptor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Raptor_C* UDinoEntry_Raptor_C::GetDefaultObj()
{
	static class UDinoEntry_Raptor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Raptor_C*>(UDinoEntry_Raptor_C::StaticClass()->DefaultObject);

	return Default;
}

}


