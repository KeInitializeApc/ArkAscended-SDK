#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Spider.DinoEntry_Spider_C
// (None)

class UClass* UDinoEntry_Spider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Spider_C");

	return Clss;
}


// DinoEntry_Spider_C DinoEntry_Spider.Default__DinoEntry_Spider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Spider_C* UDinoEntry_Spider_C::GetDefaultObj()
{
	static class UDinoEntry_Spider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Spider_C*>(UDinoEntry_Spider_C::StaticClass()->DefaultObject);

	return Default;
}

}


