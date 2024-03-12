#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Carcha.DinoEntry_Carcha_C
// (None)

class UClass* UDinoEntry_Carcha_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Carcha_C");

	return Clss;
}


// DinoEntry_Carcha_C DinoEntry_Carcha.Default__DinoEntry_Carcha_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Carcha_C* UDinoEntry_Carcha_C::GetDefaultObj()
{
	static class UDinoEntry_Carcha_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Carcha_C*>(UDinoEntry_Carcha_C::StaticClass()->DefaultObject);

	return Default;
}

}


