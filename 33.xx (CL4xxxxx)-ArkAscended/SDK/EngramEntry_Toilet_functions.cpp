#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Toilet.EngramEntry_Toilet_C
// (None)

class UClass* UEngramEntry_Toilet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Toilet_C");

	return Clss;
}


// EngramEntry_Toilet_C EngramEntry_Toilet.Default__EngramEntry_Toilet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Toilet_C* UEngramEntry_Toilet_C::GetDefaultObj()
{
	static class UEngramEntry_Toilet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Toilet_C*>(UEngramEntry_Toilet_C::StaticClass()->DefaultObject);

	return Default;
}

}


