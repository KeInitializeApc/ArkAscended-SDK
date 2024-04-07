#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_StandingTorch.EngramEntry_StandingTorch_C
// (None)

class UClass* UEngramEntry_StandingTorch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_StandingTorch_C");

	return Clss;
}


// EngramEntry_StandingTorch_C EngramEntry_StandingTorch.Default__EngramEntry_StandingTorch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_StandingTorch_C* UEngramEntry_StandingTorch_C::GetDefaultObj()
{
	static class UEngramEntry_StandingTorch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_StandingTorch_C*>(UEngramEntry_StandingTorch_C::StaticClass()->DefaultObject);

	return Default;
}

}


