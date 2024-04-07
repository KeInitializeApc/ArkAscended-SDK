#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Bee.DinoEntry_Bee_C
// (None)

class UClass* UDinoEntry_Bee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Bee_C");

	return Clss;
}


// DinoEntry_Bee_C DinoEntry_Bee.Default__DinoEntry_Bee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Bee_C* UDinoEntry_Bee_C::GetDefaultObj()
{
	static class UDinoEntry_Bee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Bee_C*>(UDinoEntry_Bee_C::StaticClass()->DefaultObject);

	return Default;
}

}


