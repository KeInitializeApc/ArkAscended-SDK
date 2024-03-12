#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Exosuit.DinoEntry_Exosuit_C
// (None)

class UClass* UDinoEntry_Exosuit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Exosuit_C");

	return Clss;
}


// DinoEntry_Exosuit_C DinoEntry_Exosuit.Default__DinoEntry_Exosuit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Exosuit_C* UDinoEntry_Exosuit_C::GetDefaultObj()
{
	static class UDinoEntry_Exosuit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Exosuit_C*>(UDinoEntry_Exosuit_C::StaticClass()->DefaultObject);

	return Default;
}

}


