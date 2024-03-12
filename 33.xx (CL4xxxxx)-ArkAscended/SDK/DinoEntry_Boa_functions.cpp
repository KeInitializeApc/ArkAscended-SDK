#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Boa.DinoEntry_Boa_C
// (None)

class UClass* UDinoEntry_Boa_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Boa_C");

	return Clss;
}


// DinoEntry_Boa_C DinoEntry_Boa.Default__DinoEntry_Boa_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Boa_C* UDinoEntry_Boa_C::GetDefaultObj()
{
	static class UDinoEntry_Boa_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Boa_C*>(UDinoEntry_Boa_C::StaticClass()->DefaultObject);

	return Default;
}

}


