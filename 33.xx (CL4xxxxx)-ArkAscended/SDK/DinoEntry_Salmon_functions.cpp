#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Salmon.DinoEntry_Salmon_C
// (None)

class UClass* UDinoEntry_Salmon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Salmon_C");

	return Clss;
}


// DinoEntry_Salmon_C DinoEntry_Salmon.Default__DinoEntry_Salmon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Salmon_C* UDinoEntry_Salmon_C::GetDefaultObj()
{
	static class UDinoEntry_Salmon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Salmon_C*>(UDinoEntry_Salmon_C::StaticClass()->DefaultObject);

	return Default;
}

}


