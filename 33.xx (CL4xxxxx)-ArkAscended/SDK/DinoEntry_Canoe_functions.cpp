#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Canoe.DinoEntry_Canoe_C
// (None)

class UClass* UDinoEntry_Canoe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Canoe_C");

	return Clss;
}


// DinoEntry_Canoe_C DinoEntry_Canoe.Default__DinoEntry_Canoe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Canoe_C* UDinoEntry_Canoe_C::GetDefaultObj()
{
	static class UDinoEntry_Canoe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Canoe_C*>(UDinoEntry_Canoe_C::StaticClass()->DefaultObject);

	return Default;
}

}


