#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CoreWorldBuffDefinitions.CoreWorldBuffDefinitions_C
// (None)

class UClass* UCoreWorldBuffDefinitions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CoreWorldBuffDefinitions_C");

	return Clss;
}


// CoreWorldBuffDefinitions_C CoreWorldBuffDefinitions.Default__CoreWorldBuffDefinitions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCoreWorldBuffDefinitions_C* UCoreWorldBuffDefinitions_C::GetDefaultObj()
{
	static class UCoreWorldBuffDefinitions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCoreWorldBuffDefinitions_C*>(UCoreWorldBuffDefinitions_C::StaticClass()->DefaultObject);

	return Default;
}

}


