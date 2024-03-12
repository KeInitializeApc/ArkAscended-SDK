#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Megatherium.DinoEntry_Megatherium_C
// (None)

class UClass* UDinoEntry_Megatherium_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Megatherium_C");

	return Clss;
}


// DinoEntry_Megatherium_C DinoEntry_Megatherium.Default__DinoEntry_Megatherium_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Megatherium_C* UDinoEntry_Megatherium_C::GetDefaultObj()
{
	static class UDinoEntry_Megatherium_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Megatherium_C*>(UDinoEntry_Megatherium_C::StaticClass()->DefaultObject);

	return Default;
}

}


