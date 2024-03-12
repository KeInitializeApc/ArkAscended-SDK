#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_SnowOwl.DinoEntry_SnowOwl_C
// (None)

class UClass* UDinoEntry_SnowOwl_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_SnowOwl_C");

	return Clss;
}


// DinoEntry_SnowOwl_C DinoEntry_SnowOwl.Default__DinoEntry_SnowOwl_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_SnowOwl_C* UDinoEntry_SnowOwl_C::GetDefaultObj()
{
	static class UDinoEntry_SnowOwl_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_SnowOwl_C*>(UDinoEntry_SnowOwl_C::StaticClass()->DefaultObject);

	return Default;
}

}


