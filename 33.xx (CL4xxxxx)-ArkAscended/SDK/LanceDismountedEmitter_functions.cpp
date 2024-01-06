#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LanceDismountedEmitter.LanceDismountedEmitter_C
// (Actor)

class UClass* ALanceDismountedEmitter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LanceDismountedEmitter_C");

	return Clss;
}


// LanceDismountedEmitter_C LanceDismountedEmitter.Default__LanceDismountedEmitter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALanceDismountedEmitter_C* ALanceDismountedEmitter_C::GetDefaultObj()
{
	static class ALanceDismountedEmitter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALanceDismountedEmitter_C*>(ALanceDismountedEmitter_C::StaticClass()->DefaultObject);

	return Default;
}

}


