#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekWall.EngramEntry_TekWall_C
// (None)

class UClass* UEngramEntry_TekWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekWall_C");

	return Clss;
}


// EngramEntry_TekWall_C EngramEntry_TekWall.Default__EngramEntry_TekWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekWall_C* UEngramEntry_TekWall_C::GetDefaultObj()
{
	static class UEngramEntry_TekWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekWall_C*>(UEngramEntry_TekWall_C::StaticClass()->DefaultObject);

	return Default;
}

}


