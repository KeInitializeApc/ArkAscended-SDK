#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekGenerator.EngramEntry_TekGenerator_C
// (None)

class UClass* UEngramEntry_TekGenerator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekGenerator_C");

	return Clss;
}


// EngramEntry_TekGenerator_C EngramEntry_TekGenerator.Default__EngramEntry_TekGenerator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekGenerator_C* UEngramEntry_TekGenerator_C::GetDefaultObj()
{
	static class UEngramEntry_TekGenerator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekGenerator_C*>(UEngramEntry_TekGenerator_C::StaticClass()->DefaultObject);

	return Default;
}

}


