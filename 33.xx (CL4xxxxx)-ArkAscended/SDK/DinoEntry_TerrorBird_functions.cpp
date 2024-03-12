#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_TerrorBird.DinoEntry_TerrorBird_C
// (None)

class UClass* UDinoEntry_TerrorBird_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_TerrorBird_C");

	return Clss;
}


// DinoEntry_TerrorBird_C DinoEntry_TerrorBird.Default__DinoEntry_TerrorBird_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_TerrorBird_C* UDinoEntry_TerrorBird_C::GetDefaultObj()
{
	static class UDinoEntry_TerrorBird_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_TerrorBird_C*>(UDinoEntry_TerrorBird_C::StaticClass()->DefaultObject);

	return Default;
}

}


