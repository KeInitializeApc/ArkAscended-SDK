#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Bigfoot.DinoEntry_Bigfoot_C
// (None)

class UClass* UDinoEntry_Bigfoot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Bigfoot_C");

	return Clss;
}


// DinoEntry_Bigfoot_C DinoEntry_Bigfoot.Default__DinoEntry_Bigfoot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Bigfoot_C* UDinoEntry_Bigfoot_C::GetDefaultObj()
{
	static class UDinoEntry_Bigfoot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Bigfoot_C*>(UDinoEntry_Bigfoot_C::StaticClass()->DefaultObject);

	return Default;
}

}


