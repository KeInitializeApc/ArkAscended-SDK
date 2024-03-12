#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Jerboa.DinoEntry_Jerboa_C
// (None)

class UClass* UDinoEntry_Jerboa_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Jerboa_C");

	return Clss;
}


// DinoEntry_Jerboa_C DinoEntry_Jerboa.Default__DinoEntry_Jerboa_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Jerboa_C* UDinoEntry_Jerboa_C::GetDefaultObj()
{
	static class UDinoEntry_Jerboa_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Jerboa_C*>(UDinoEntry_Jerboa_C::StaticClass()->DefaultObject);

	return Default;
}

}


