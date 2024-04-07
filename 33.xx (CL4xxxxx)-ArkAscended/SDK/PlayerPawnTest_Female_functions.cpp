#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerPawnTest_Female.PlayerPawnTest_Female_C
// (Actor, Pawn)

class UClass* APlayerPawnTest_Female_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerPawnTest_Female_C");

	return Clss;
}


// PlayerPawnTest_Female_C PlayerPawnTest_Female.Default__PlayerPawnTest_Female_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APlayerPawnTest_Female_C* APlayerPawnTest_Female_C::GetDefaultObj()
{
	static class APlayerPawnTest_Female_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APlayerPawnTest_Female_C*>(APlayerPawnTest_Female_C::StaticClass()->DefaultObject);

	return Default;
}

}


