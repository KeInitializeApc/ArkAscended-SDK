#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_TekWyvern.DinoEntry_TekWyvern_C
// (None)

class UClass* UDinoEntry_TekWyvern_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_TekWyvern_C");

	return Clss;
}


// DinoEntry_TekWyvern_C DinoEntry_TekWyvern.Default__DinoEntry_TekWyvern_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_TekWyvern_C* UDinoEntry_TekWyvern_C::GetDefaultObj()
{
	static class UDinoEntry_TekWyvern_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_TekWyvern_C*>(UDinoEntry_TekWyvern_C::StaticClass()->DefaultObject);

	return Default;
}

}


