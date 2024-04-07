#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TestGameMode.TestGameMode_C
// (Actor)

class UClass* ATestGameMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestGameMode_C");

	return Clss;
}


// TestGameMode_C TestGameMode.Default__TestGameMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATestGameMode_C* ATestGameMode_C::GetDefaultObj()
{
	static class ATestGameMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATestGameMode_C*>(ATestGameMode_C::StaticClass()->DefaultObject);

	return Default;
}

}


