#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_RockGolem.DinoEntry_RockGolem_C
// (None)

class UClass* UDinoEntry_RockGolem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_RockGolem_C");

	return Clss;
}


// DinoEntry_RockGolem_C DinoEntry_RockGolem.Default__DinoEntry_RockGolem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_RockGolem_C* UDinoEntry_RockGolem_C::GetDefaultObj()
{
	static class UDinoEntry_RockGolem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_RockGolem_C*>(UDinoEntry_RockGolem_C::StaticClass()->DefaultObject);

	return Default;
}

}


