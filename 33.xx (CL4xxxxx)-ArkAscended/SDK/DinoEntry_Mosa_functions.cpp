#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Mosa.DinoEntry_Mosa_C
// (None)

class UClass* UDinoEntry_Mosa_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Mosa_C");

	return Clss;
}


// DinoEntry_Mosa_C DinoEntry_Mosa.Default__DinoEntry_Mosa_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Mosa_C* UDinoEntry_Mosa_C::GetDefaultObj()
{
	static class UDinoEntry_Mosa_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Mosa_C*>(UDinoEntry_Mosa_C::StaticClass()->DefaultObject);

	return Default;
}

}


