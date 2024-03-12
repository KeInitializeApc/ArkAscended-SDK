#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Rockwell2.DinoEntry_Rockwell2_C
// (None)

class UClass* UDinoEntry_Rockwell2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Rockwell2_C");

	return Clss;
}


// DinoEntry_Rockwell2_C DinoEntry_Rockwell2.Default__DinoEntry_Rockwell2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Rockwell2_C* UDinoEntry_Rockwell2_C::GetDefaultObj()
{
	static class UDinoEntry_Rockwell2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Rockwell2_C*>(UDinoEntry_Rockwell2_C::StaticClass()->DefaultObject);

	return Default;
}

}


