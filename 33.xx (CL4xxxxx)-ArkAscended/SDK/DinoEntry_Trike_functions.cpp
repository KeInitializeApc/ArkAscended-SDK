#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Trike.DinoEntry_Trike_C
// (None)

class UClass* UDinoEntry_Trike_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Trike_C");

	return Clss;
}


// DinoEntry_Trike_C DinoEntry_Trike.Default__DinoEntry_Trike_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Trike_C* UDinoEntry_Trike_C::GetDefaultObj()
{
	static class UDinoEntry_Trike_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Trike_C*>(UDinoEntry_Trike_C::StaticClass()->DefaultObject);

	return Default;
}

}


