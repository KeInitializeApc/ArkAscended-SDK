#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_HammerheadBat.DinoEntry_HammerheadBat_C
// (None)

class UClass* UDinoEntry_HammerheadBat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_HammerheadBat_C");

	return Clss;
}


// DinoEntry_HammerheadBat_C DinoEntry_HammerheadBat.Default__DinoEntry_HammerheadBat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_HammerheadBat_C* UDinoEntry_HammerheadBat_C::GetDefaultObj()
{
	static class UDinoEntry_HammerheadBat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_HammerheadBat_C*>(UDinoEntry_HammerheadBat_C::StaticClass()->DefaultObject);

	return Default;
}

}


