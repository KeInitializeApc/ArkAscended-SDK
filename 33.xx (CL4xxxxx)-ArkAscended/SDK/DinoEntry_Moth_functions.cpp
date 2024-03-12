#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Moth.DinoEntry_Moth_C
// (None)

class UClass* UDinoEntry_Moth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Moth_C");

	return Clss;
}


// DinoEntry_Moth_C DinoEntry_Moth.Default__DinoEntry_Moth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Moth_C* UDinoEntry_Moth_C::GetDefaultObj()
{
	static class UDinoEntry_Moth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Moth_C*>(UDinoEntry_Moth_C::StaticClass()->DefaultObject);

	return Default;
}

}


