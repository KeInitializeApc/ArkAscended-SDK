#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekBed.EngramEntry_TekBed_C
// (None)

class UClass* UEngramEntry_TekBed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekBed_C");

	return Clss;
}


// EngramEntry_TekBed_C EngramEntry_TekBed.Default__EngramEntry_TekBed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekBed_C* UEngramEntry_TekBed_C::GetDefaultObj()
{
	static class UEngramEntry_TekBed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekBed_C*>(UEngramEntry_TekBed_C::StaticClass()->DefaultObject);

	return Default;
}

}


