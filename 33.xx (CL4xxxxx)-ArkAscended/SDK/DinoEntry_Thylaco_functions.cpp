#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Thylaco.DinoEntry_Thylaco_C
// (None)

class UClass* UDinoEntry_Thylaco_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Thylaco_C");

	return Clss;
}


// DinoEntry_Thylaco_C DinoEntry_Thylaco.Default__DinoEntry_Thylaco_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Thylaco_C* UDinoEntry_Thylaco_C::GetDefaultObj()
{
	static class UDinoEntry_Thylaco_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Thylaco_C*>(UDinoEntry_Thylaco_C::StaticClass()->DefaultObject);

	return Default;
}

}


