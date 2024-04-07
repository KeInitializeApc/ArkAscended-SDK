#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_EelMinion.DinoEntry_EelMinion_C
// (None)

class UClass* UDinoEntry_EelMinion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_EelMinion_C");

	return Clss;
}


// DinoEntry_EelMinion_C DinoEntry_EelMinion.Default__DinoEntry_EelMinion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_EelMinion_C* UDinoEntry_EelMinion_C::GetDefaultObj()
{
	static class UDinoEntry_EelMinion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_EelMinion_C*>(UDinoEntry_EelMinion_C::StaticClass()->DefaultObject);

	return Default;
}

}


