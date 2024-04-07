#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekPants.EngramEntry_TekPants_C
// (None)

class UClass* UEngramEntry_TekPants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekPants_C");

	return Clss;
}


// EngramEntry_TekPants_C EngramEntry_TekPants.Default__EngramEntry_TekPants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekPants_C* UEngramEntry_TekPants_C::GetDefaultObj()
{
	static class UEngramEntry_TekPants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekPants_C*>(UEngramEntry_TekPants_C::StaticClass()->DefaultObject);

	return Default;
}

}


