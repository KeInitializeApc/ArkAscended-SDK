#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Direbear.DinoEntry_Direbear_C
// (None)

class UClass* UDinoEntry_Direbear_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Direbear_C");

	return Clss;
}


// DinoEntry_Direbear_C DinoEntry_Direbear.Default__DinoEntry_Direbear_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Direbear_C* UDinoEntry_Direbear_C::GetDefaultObj()
{
	static class UDinoEntry_Direbear_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Direbear_C*>(UDinoEntry_Direbear_C::StaticClass()->DefaultObject);

	return Default;
}

}


