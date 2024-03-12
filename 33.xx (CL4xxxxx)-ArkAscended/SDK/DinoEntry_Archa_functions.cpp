#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Archa.DinoEntry_Archa_C
// (None)

class UClass* UDinoEntry_Archa_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Archa_C");

	return Clss;
}


// DinoEntry_Archa_C DinoEntry_Archa.Default__DinoEntry_Archa_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Archa_C* UDinoEntry_Archa_C::GetDefaultObj()
{
	static class UDinoEntry_Archa_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Archa_C*>(UDinoEntry_Archa_C::StaticClass()->DefaultObject);

	return Default;
}

}


