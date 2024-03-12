#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_EmptyCryopod.EngramEntry_EmptyCryopod_C
// (None)

class UClass* UEngramEntry_EmptyCryopod_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_EmptyCryopod_C");

	return Clss;
}


// EngramEntry_EmptyCryopod_C EngramEntry_EmptyCryopod.Default__EngramEntry_EmptyCryopod_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_EmptyCryopod_C* UEngramEntry_EmptyCryopod_C::GetDefaultObj()
{
	static class UEngramEntry_EmptyCryopod_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_EmptyCryopod_C*>(UEngramEntry_EmptyCryopod_C::StaticClass()->DefaultObject);

	return Default;
}

}


