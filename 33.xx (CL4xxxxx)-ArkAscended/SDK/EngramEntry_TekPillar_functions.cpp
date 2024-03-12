#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekPillar.EngramEntry_TekPillar_C
// (None)

class UClass* UEngramEntry_TekPillar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekPillar_C");

	return Clss;
}


// EngramEntry_TekPillar_C EngramEntry_TekPillar.Default__EngramEntry_TekPillar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekPillar_C* UEngramEntry_TekPillar_C::GetDefaultObj()
{
	static class UEngramEntry_TekPillar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekPillar_C*>(UEngramEntry_TekPillar_C::StaticClass()->DefaultObject);

	return Default;
}

}


