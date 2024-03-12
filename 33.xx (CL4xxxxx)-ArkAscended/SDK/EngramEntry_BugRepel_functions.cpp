#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_BugRepel.EngramEntry_BugRepel_C
// (None)

class UClass* UEngramEntry_BugRepel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_BugRepel_C");

	return Clss;
}


// EngramEntry_BugRepel_C EngramEntry_BugRepel.Default__EngramEntry_BugRepel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_BugRepel_C* UEngramEntry_BugRepel_C::GetDefaultObj()
{
	static class UEngramEntry_BugRepel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_BugRepel_C*>(UEngramEntry_BugRepel_C::StaticClass()->DefaultObject);

	return Default;
}

}


