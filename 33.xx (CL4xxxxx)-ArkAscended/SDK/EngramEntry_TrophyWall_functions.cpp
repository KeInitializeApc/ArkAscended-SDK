#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TrophyWall.EngramEntry_TrophyWall_C
// (None)

class UClass* UEngramEntry_TrophyWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TrophyWall_C");

	return Clss;
}


// EngramEntry_TrophyWall_C EngramEntry_TrophyWall.Default__EngramEntry_TrophyWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TrophyWall_C* UEngramEntry_TrophyWall_C::GetDefaultObj()
{
	static class UEngramEntry_TrophyWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TrophyWall_C*>(UEngramEntry_TrophyWall_C::StaticClass()->DefaultObject);

	return Default;
}

}


