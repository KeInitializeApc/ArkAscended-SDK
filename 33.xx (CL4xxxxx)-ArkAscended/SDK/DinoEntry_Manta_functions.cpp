#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Manta.DinoEntry_Manta_C
// (None)

class UClass* UDinoEntry_Manta_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Manta_C");

	return Clss;
}


// DinoEntry_Manta_C DinoEntry_Manta.Default__DinoEntry_Manta_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Manta_C* UDinoEntry_Manta_C::GetDefaultObj()
{
	static class UDinoEntry_Manta_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Manta_C*>(UDinoEntry_Manta_C::StaticClass()->DefaultObject);

	return Default;
}

}


