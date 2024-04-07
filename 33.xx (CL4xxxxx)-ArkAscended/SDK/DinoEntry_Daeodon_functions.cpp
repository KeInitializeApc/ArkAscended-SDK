#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Daeodon.DinoEntry_Daeodon_C
// (None)

class UClass* UDinoEntry_Daeodon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Daeodon_C");

	return Clss;
}


// DinoEntry_Daeodon_C DinoEntry_Daeodon.Default__DinoEntry_Daeodon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Daeodon_C* UDinoEntry_Daeodon_C::GetDefaultObj()
{
	static class UDinoEntry_Daeodon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Daeodon_C*>(UDinoEntry_Daeodon_C::StaticClass()->DefaultObject);

	return Default;
}

}


