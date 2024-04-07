#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RegrowEmitter.RegrowEmitter_C
// (Actor)

class UClass* ARegrowEmitter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RegrowEmitter_C");

	return Clss;
}


// RegrowEmitter_C RegrowEmitter.Default__RegrowEmitter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARegrowEmitter_C* ARegrowEmitter_C::GetDefaultObj()
{
	static class ARegrowEmitter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARegrowEmitter_C*>(ARegrowEmitter_C::StaticClass()->DefaultObject);

	return Default;
}

}


