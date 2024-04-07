#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Ramp_Stone.EngramEntry_Ramp_Stone_C
// (None)

class UClass* UEngramEntry_Ramp_Stone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Ramp_Stone_C");

	return Clss;
}


// EngramEntry_Ramp_Stone_C EngramEntry_Ramp_Stone.Default__EngramEntry_Ramp_Stone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Ramp_Stone_C* UEngramEntry_Ramp_Stone_C::GetDefaultObj()
{
	static class UEngramEntry_Ramp_Stone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Ramp_Stone_C*>(UEngramEntry_Ramp_Stone_C::StaticClass()->DefaultObject);

	return Default;
}

}


