#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_TekSkiff.DinoEntry_TekSkiff_C
// (None)

class UClass* UDinoEntry_TekSkiff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_TekSkiff_C");

	return Clss;
}


// DinoEntry_TekSkiff_C DinoEntry_TekSkiff.Default__DinoEntry_TekSkiff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_TekSkiff_C* UDinoEntry_TekSkiff_C::GetDefaultObj()
{
	static class UDinoEntry_TekSkiff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_TekSkiff_C*>(UDinoEntry_TekSkiff_C::StaticClass()->DefaultObject);

	return Default;
}

}


