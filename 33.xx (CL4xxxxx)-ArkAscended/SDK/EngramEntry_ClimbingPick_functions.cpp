#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ClimbingPick.EngramEntry_ClimbingPick_C
// (None)

class UClass* UEngramEntry_ClimbingPick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ClimbingPick_C");

	return Clss;
}


// EngramEntry_ClimbingPick_C EngramEntry_ClimbingPick.Default__EngramEntry_ClimbingPick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ClimbingPick_C* UEngramEntry_ClimbingPick_C::GetDefaultObj()
{
	static class UEngramEntry_ClimbingPick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ClimbingPick_C*>(UEngramEntry_ClimbingPick_C::StaticClass()->DefaultObject);

	return Default;
}

}


