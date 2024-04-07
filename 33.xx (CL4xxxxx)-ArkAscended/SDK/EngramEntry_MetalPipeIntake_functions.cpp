#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MetalPipeIntake.EngramEntry_MetalPipeIntake_C
// (None)

class UClass* UEngramEntry_MetalPipeIntake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MetalPipeIntake_C");

	return Clss;
}


// EngramEntry_MetalPipeIntake_C EngramEntry_MetalPipeIntake.Default__EngramEntry_MetalPipeIntake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MetalPipeIntake_C* UEngramEntry_MetalPipeIntake_C::GetDefaultObj()
{
	static class UEngramEntry_MetalPipeIntake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MetalPipeIntake_C*>(UEngramEntry_MetalPipeIntake_C::StaticClass()->DefaultObject);

	return Default;
}

}


