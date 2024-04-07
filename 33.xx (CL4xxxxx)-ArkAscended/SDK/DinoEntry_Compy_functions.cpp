#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Compy.DinoEntry_Compy_C
// (None)

class UClass* UDinoEntry_Compy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Compy_C");

	return Clss;
}


// DinoEntry_Compy_C DinoEntry_Compy.Default__DinoEntry_Compy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Compy_C* UDinoEntry_Compy_C::GetDefaultObj()
{
	static class UDinoEntry_Compy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Compy_C*>(UDinoEntry_Compy_C::StaticClass()->DefaultObject);

	return Default;
}

}


