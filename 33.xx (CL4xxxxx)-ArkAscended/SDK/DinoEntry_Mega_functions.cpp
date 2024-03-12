#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Mega.DinoEntry_Mega_C
// (None)

class UClass* UDinoEntry_Mega_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Mega_C");

	return Clss;
}


// DinoEntry_Mega_C DinoEntry_Mega.Default__DinoEntry_Mega_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Mega_C* UDinoEntry_Mega_C::GetDefaultObj()
{
	static class UDinoEntry_Mega_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Mega_C*>(UDinoEntry_Mega_C::StaticClass()->DefaultObject);

	return Default;
}

}


