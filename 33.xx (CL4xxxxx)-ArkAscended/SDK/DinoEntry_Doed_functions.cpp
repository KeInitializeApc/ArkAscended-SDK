#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Doed.DinoEntry_Doed_C
// (None)

class UClass* UDinoEntry_Doed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Doed_C");

	return Clss;
}


// DinoEntry_Doed_C DinoEntry_Doed.Default__DinoEntry_Doed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Doed_C* UDinoEntry_Doed_C::GetDefaultObj()
{
	static class UDinoEntry_Doed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Doed_C*>(UDinoEntry_Doed_C::StaticClass()->DefaultObject);

	return Default;
}

}


