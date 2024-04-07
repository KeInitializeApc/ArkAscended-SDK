#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_SpaceDolphin.DinoEntry_SpaceDolphin_C
// (None)

class UClass* UDinoEntry_SpaceDolphin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_SpaceDolphin_C");

	return Clss;
}


// DinoEntry_SpaceDolphin_C DinoEntry_SpaceDolphin.Default__DinoEntry_SpaceDolphin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_SpaceDolphin_C* UDinoEntry_SpaceDolphin_C::GetDefaultObj()
{
	static class UDinoEntry_SpaceDolphin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_SpaceDolphin_C*>(UDinoEntry_SpaceDolphin_C::StaticClass()->DefaultObject);

	return Default;
}

}


