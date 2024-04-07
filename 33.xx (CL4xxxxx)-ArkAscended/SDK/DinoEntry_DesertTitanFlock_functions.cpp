#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_DesertTitanFlock.DinoEntry_DesertTitanFlock_C
// (None)

class UClass* UDinoEntry_DesertTitanFlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_DesertTitanFlock_C");

	return Clss;
}


// DinoEntry_DesertTitanFlock_C DinoEntry_DesertTitanFlock.Default__DinoEntry_DesertTitanFlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_DesertTitanFlock_C* UDinoEntry_DesertTitanFlock_C::GetDefaultObj()
{
	static class UDinoEntry_DesertTitanFlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_DesertTitanFlock_C*>(UDinoEntry_DesertTitanFlock_C::StaticClass()->DefaultObject);

	return Default;
}

}


