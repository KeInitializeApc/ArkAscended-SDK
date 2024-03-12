#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ThatchWall.EngramEntry_ThatchWall_C
// (None)

class UClass* UEngramEntry_ThatchWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ThatchWall_C");

	return Clss;
}


// EngramEntry_ThatchWall_C EngramEntry_ThatchWall.Default__EngramEntry_ThatchWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ThatchWall_C* UEngramEntry_ThatchWall_C::GetDefaultObj()
{
	static class UEngramEntry_ThatchWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ThatchWall_C*>(UEngramEntry_ThatchWall_C::StaticClass()->DefaultObject);

	return Default;
}

}


