#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_NightVisionGoggles.Buff_NightVisionGoggles_C
// (Actor)

class UClass* ABuff_NightVisionGoggles_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_NightVisionGoggles_C");

	return Clss;
}


// Buff_NightVisionGoggles_C Buff_NightVisionGoggles.Default__Buff_NightVisionGoggles_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_NightVisionGoggles_C* ABuff_NightVisionGoggles_C::GetDefaultObj()
{
	static class ABuff_NightVisionGoggles_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_NightVisionGoggles_C*>(ABuff_NightVisionGoggles_C::StaticClass()->DefaultObject);

	return Default;
}

}


