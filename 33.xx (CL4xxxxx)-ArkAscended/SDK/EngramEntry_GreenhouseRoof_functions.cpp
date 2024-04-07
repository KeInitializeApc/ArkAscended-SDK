#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_GreenhouseRoof.EngramEntry_GreenhouseRoof_C
// (None)

class UClass* UEngramEntry_GreenhouseRoof_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_GreenhouseRoof_C");

	return Clss;
}


// EngramEntry_GreenhouseRoof_C EngramEntry_GreenhouseRoof.Default__EngramEntry_GreenhouseRoof_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_GreenhouseRoof_C* UEngramEntry_GreenhouseRoof_C::GetDefaultObj()
{
	static class UEngramEntry_GreenhouseRoof_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_GreenhouseRoof_C*>(UEngramEntry_GreenhouseRoof_C::StaticClass()->DefaultObject);

	return Default;
}

}


