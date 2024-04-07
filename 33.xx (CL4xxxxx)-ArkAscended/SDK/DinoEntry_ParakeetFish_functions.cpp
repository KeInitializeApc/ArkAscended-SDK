#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_ParakeetFish.DinoEntry_ParakeetFish_C
// (None)

class UClass* UDinoEntry_ParakeetFish_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_ParakeetFish_C");

	return Clss;
}


// DinoEntry_ParakeetFish_C DinoEntry_ParakeetFish.Default__DinoEntry_ParakeetFish_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_ParakeetFish_C* UDinoEntry_ParakeetFish_C::GetDefaultObj()
{
	static class UDinoEntry_ParakeetFish_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_ParakeetFish_C*>(UDinoEntry_ParakeetFish_C::StaticClass()->DefaultObject);

	return Default;
}

}


