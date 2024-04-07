#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_StonePipeIntake.EngramEntry_StonePipeIntake_C
// (None)

class UClass* UEngramEntry_StonePipeIntake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_StonePipeIntake_C");

	return Clss;
}


// EngramEntry_StonePipeIntake_C EngramEntry_StonePipeIntake.Default__EngramEntry_StonePipeIntake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_StonePipeIntake_C* UEngramEntry_StonePipeIntake_C::GetDefaultObj()
{
	static class UEngramEntry_StonePipeIntake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_StonePipeIntake_C*>(UEngramEntry_StonePipeIntake_C::StaticClass()->DefaultObject);

	return Default;
}

}


