#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_LargeWall_Metal.EngramEntry_LargeWall_Metal_C
// (None)

class UClass* UEngramEntry_LargeWall_Metal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_LargeWall_Metal_C");

	return Clss;
}


// EngramEntry_LargeWall_Metal_C EngramEntry_LargeWall_Metal.Default__EngramEntry_LargeWall_Metal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_LargeWall_Metal_C* UEngramEntry_LargeWall_Metal_C::GetDefaultObj()
{
	static class UEngramEntry_LargeWall_Metal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_LargeWall_Metal_C*>(UEngramEntry_LargeWall_Metal_C::StaticClass()->DefaultObject);

	return Default;
}

}


