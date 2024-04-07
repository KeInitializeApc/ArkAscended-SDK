#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_JumpPad.EngramEntry_JumpPad_C
// (None)

class UClass* UEngramEntry_JumpPad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_JumpPad_C");

	return Clss;
}


// EngramEntry_JumpPad_C EngramEntry_JumpPad.Default__EngramEntry_JumpPad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_JumpPad_C* UEngramEntry_JumpPad_C::GetDefaultObj()
{
	static class UEngramEntry_JumpPad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_JumpPad_C*>(UEngramEntry_JumpPad_C::StaticClass()->DefaultObject);

	return Default;
}

}


