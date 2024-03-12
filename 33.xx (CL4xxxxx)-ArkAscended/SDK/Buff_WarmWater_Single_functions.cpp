#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_WarmWater_Single.Buff_WarmWater_Single_C
// (Actor)

class UClass* ABuff_WarmWater_Single_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_WarmWater_Single_C");

	return Clss;
}


// Buff_WarmWater_Single_C Buff_WarmWater_Single.Default__Buff_WarmWater_Single_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_WarmWater_Single_C* ABuff_WarmWater_Single_C::GetDefaultObj()
{
	static class ABuff_WarmWater_Single_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_WarmWater_Single_C*>(ABuff_WarmWater_Single_C::StaticClass()->DefaultObject);

	return Default;
}

}


