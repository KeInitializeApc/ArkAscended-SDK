#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ShoulderCannon.EngramEntry_ShoulderCannon_C
// (None)

class UClass* UEngramEntry_ShoulderCannon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ShoulderCannon_C");

	return Clss;
}


// EngramEntry_ShoulderCannon_C EngramEntry_ShoulderCannon.Default__EngramEntry_ShoulderCannon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ShoulderCannon_C* UEngramEntry_ShoulderCannon_C::GetDefaultObj()
{
	static class UEngramEntry_ShoulderCannon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ShoulderCannon_C*>(UEngramEntry_ShoulderCannon_C::StaticClass()->DefaultObject);

	return Default;
}

}


