#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_CoolWater.Buff_CoolWater_C
// (Actor)

class UClass* ABuff_CoolWater_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_CoolWater_C");

	return Clss;
}


// Buff_CoolWater_C Buff_CoolWater.Default__Buff_CoolWater_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_CoolWater_C* ABuff_CoolWater_C::GetDefaultObj()
{
	static class ABuff_CoolWater_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_CoolWater_C*>(ABuff_CoolWater_C::StaticClass()->DefaultObject);

	return Default;
}

}


