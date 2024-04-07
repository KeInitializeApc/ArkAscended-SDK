#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ThatchSlopedWall_left.EngramEntry_ThatchSlopedWall_left_C
// (None)

class UClass* UEngramEntry_ThatchSlopedWall_left_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ThatchSlopedWall_left_C");

	return Clss;
}


// EngramEntry_ThatchSlopedWall_left_C EngramEntry_ThatchSlopedWall_left.Default__EngramEntry_ThatchSlopedWall_left_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ThatchSlopedWall_left_C* UEngramEntry_ThatchSlopedWall_left_C::GetDefaultObj()
{
	static class UEngramEntry_ThatchSlopedWall_left_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ThatchSlopedWall_left_C*>(UEngramEntry_ThatchSlopedWall_left_C::StaticClass()->DefaultObject);

	return Default;
}

}


