#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerPawnTest_Male.PlayerPawnTest_Male_C
// (Actor, Pawn)

class UClass* APlayerPawnTest_Male_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerPawnTest_Male_C");

	return Clss;
}


// PlayerPawnTest_Male_C PlayerPawnTest_Male.Default__PlayerPawnTest_Male_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APlayerPawnTest_Male_C* APlayerPawnTest_Male_C::GetDefaultObj()
{
	static class APlayerPawnTest_Male_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APlayerPawnTest_Male_C*>(APlayerPawnTest_Male_C::StaticClass()->DefaultObject);

	return Default;
}

}


