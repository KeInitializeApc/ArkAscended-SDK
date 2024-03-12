#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Pachyrhino.DinoEntry_Pachyrhino_C
// (None)

class UClass* UDinoEntry_Pachyrhino_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Pachyrhino_C");

	return Clss;
}


// DinoEntry_Pachyrhino_C DinoEntry_Pachyrhino.Default__DinoEntry_Pachyrhino_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Pachyrhino_C* UDinoEntry_Pachyrhino_C::GetDefaultObj()
{
	static class UDinoEntry_Pachyrhino_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Pachyrhino_C*>(UDinoEntry_Pachyrhino_C::StaticClass()->DefaultObject);

	return Default;
}

}


