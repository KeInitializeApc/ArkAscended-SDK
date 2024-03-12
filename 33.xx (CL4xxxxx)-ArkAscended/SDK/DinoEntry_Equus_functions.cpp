#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Equus.DinoEntry_Equus_C
// (None)

class UClass* UDinoEntry_Equus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Equus_C");

	return Clss;
}


// DinoEntry_Equus_C DinoEntry_Equus.Default__DinoEntry_Equus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Equus_C* UDinoEntry_Equus_C::GetDefaultObj()
{
	static class UDinoEntry_Equus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Equus_C*>(UDinoEntry_Equus_C::StaticClass()->DefaultObject);

	return Default;
}

}


