#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_TekStrider.DinoEntry_TekStrider_C
// (None)

class UClass* UDinoEntry_TekStrider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_TekStrider_C");

	return Clss;
}


// DinoEntry_TekStrider_C DinoEntry_TekStrider.Default__DinoEntry_TekStrider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_TekStrider_C* UDinoEntry_TekStrider_C::GetDefaultObj()
{
	static class UDinoEntry_TekStrider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_TekStrider_C*>(UDinoEntry_TekStrider_C::StaticClass()->DefaultObject);

	return Default;
}

}


