#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Bronto.DinoEntry_Bronto_C
// (None)

class UClass* UDinoEntry_Bronto_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Bronto_C");

	return Clss;
}


// DinoEntry_Bronto_C DinoEntry_Bronto.Default__DinoEntry_Bronto_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Bronto_C* UDinoEntry_Bronto_C::GetDefaultObj()
{
	static class UDinoEntry_Bronto_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Bronto_C*>(UDinoEntry_Bronto_C::StaticClass()->DefaultObject);

	return Default;
}

}


