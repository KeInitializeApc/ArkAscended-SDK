#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Rhino.DinoEntry_Rhino_C
// (None)

class UClass* UDinoEntry_Rhino_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Rhino_C");

	return Clss;
}


// DinoEntry_Rhino_C DinoEntry_Rhino.Default__DinoEntry_Rhino_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Rhino_C* UDinoEntry_Rhino_C::GetDefaultObj()
{
	static class UDinoEntry_Rhino_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Rhino_C*>(UDinoEntry_Rhino_C::StaticClass()->DefaultObject);

	return Default;
}

}


