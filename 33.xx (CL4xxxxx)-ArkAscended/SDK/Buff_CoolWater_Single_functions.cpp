#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_CoolWater_Single.Buff_CoolWater_Single_C
// (Actor)

class UClass* ABuff_CoolWater_Single_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_CoolWater_Single_C");

	return Clss;
}


// Buff_CoolWater_Single_C Buff_CoolWater_Single.Default__Buff_CoolWater_Single_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_CoolWater_Single_C* ABuff_CoolWater_Single_C::GetDefaultObj()
{
	static class ABuff_CoolWater_Single_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_CoolWater_Single_C*>(ABuff_CoolWater_Single_C::StaticClass()->DefaultObject);

	return Default;
}

}


