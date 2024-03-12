#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerPawnTest_Child.PlayerPawnTest_Child_C
// (Actor, Pawn)

class UClass* APlayerPawnTest_Child_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerPawnTest_Child_C");

	return Clss;
}


// PlayerPawnTest_Child_C PlayerPawnTest_Child.Default__PlayerPawnTest_Child_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APlayerPawnTest_Child_C* APlayerPawnTest_Child_C::GetDefaultObj()
{
	static class APlayerPawnTest_Child_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APlayerPawnTest_Child_C*>(APlayerPawnTest_Child_C::StaticClass()->DefaultObject);

	return Default;
}

}


