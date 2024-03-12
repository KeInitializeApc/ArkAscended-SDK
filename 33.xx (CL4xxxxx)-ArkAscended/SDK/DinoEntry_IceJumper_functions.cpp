#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_IceJumper.DinoEntry_IceJumper_C
// (None)

class UClass* UDinoEntry_IceJumper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_IceJumper_C");

	return Clss;
}


// DinoEntry_IceJumper_C DinoEntry_IceJumper.Default__DinoEntry_IceJumper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_IceJumper_C* UDinoEntry_IceJumper_C::GetDefaultObj()
{
	static class UDinoEntry_IceJumper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_IceJumper_C*>(UDinoEntry_IceJumper_C::StaticClass()->DefaultObject);

	return Default;
}

}


