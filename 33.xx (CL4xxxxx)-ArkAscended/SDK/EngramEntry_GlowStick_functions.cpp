#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_GlowStick.EngramEntry_Glowstick_C
// (None)

class UClass* UEngramEntry_Glowstick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Glowstick_C");

	return Clss;
}


// EngramEntry_Glowstick_C EngramEntry_GlowStick.Default__EngramEntry_GlowStick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Glowstick_C* UEngramEntry_Glowstick_C::GetDefaultObj()
{
	static class UEngramEntry_Glowstick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Glowstick_C*>(UEngramEntry_Glowstick_C::StaticClass()->DefaultObject);

	return Default;
}

}


