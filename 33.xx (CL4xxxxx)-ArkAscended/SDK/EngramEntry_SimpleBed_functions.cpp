#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_SimpleBed.EngramEntry_SimpleBed_C
// (None)

class UClass* UEngramEntry_SimpleBed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_SimpleBed_C");

	return Clss;
}


// EngramEntry_SimpleBed_C EngramEntry_SimpleBed.Default__EngramEntry_SimpleBed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_SimpleBed_C* UEngramEntry_SimpleBed_C::GetDefaultObj()
{
	static class UEngramEntry_SimpleBed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_SimpleBed_C*>(UEngramEntry_SimpleBed_C::StaticClass()->DefaultObject);

	return Default;
}

}


