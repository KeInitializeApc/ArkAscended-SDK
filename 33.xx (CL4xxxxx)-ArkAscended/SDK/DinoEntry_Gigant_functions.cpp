#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Gigant.DinoEntry_Gigant_C
// (None)

class UClass* UDinoEntry_Gigant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Gigant_C");

	return Clss;
}


// DinoEntry_Gigant_C DinoEntry_Gigant.Default__DinoEntry_Gigant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Gigant_C* UDinoEntry_Gigant_C::GetDefaultObj()
{
	static class UDinoEntry_Gigant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Gigant_C*>(UDinoEntry_Gigant_C::StaticClass()->DefaultObject);

	return Default;
}

}


