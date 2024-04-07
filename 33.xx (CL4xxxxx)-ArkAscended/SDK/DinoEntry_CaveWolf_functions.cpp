#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_CaveWolf.DinoEntry_CaveWolf_C
// (None)

class UClass* UDinoEntry_CaveWolf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_CaveWolf_C");

	return Clss;
}


// DinoEntry_CaveWolf_C DinoEntry_CaveWolf.Default__DinoEntry_CaveWolf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_CaveWolf_C* UDinoEntry_CaveWolf_C::GetDefaultObj()
{
	static class UDinoEntry_CaveWolf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_CaveWolf_C*>(UDinoEntry_CaveWolf_C::StaticClass()->DefaultObject);

	return Default;
}

}


