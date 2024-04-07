#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Troodon.DinoEntry_Troodon_C
// (None)

class UClass* UDinoEntry_Troodon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Troodon_C");

	return Clss;
}


// DinoEntry_Troodon_C DinoEntry_Troodon.Default__DinoEntry_Troodon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Troodon_C* UDinoEntry_Troodon_C::GetDefaultObj()
{
	static class UDinoEntry_Troodon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Troodon_C*>(UDinoEntry_Troodon_C::StaticClass()->DefaultObject);

	return Default;
}

}


