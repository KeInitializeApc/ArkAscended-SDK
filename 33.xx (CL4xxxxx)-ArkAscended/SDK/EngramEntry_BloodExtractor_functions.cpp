#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_BloodExtractor.EngramEntry_BloodExtractor_C
// (None)

class UClass* UEngramEntry_BloodExtractor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_BloodExtractor_C");

	return Clss;
}


// EngramEntry_BloodExtractor_C EngramEntry_BloodExtractor.Default__EngramEntry_BloodExtractor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_BloodExtractor_C* UEngramEntry_BloodExtractor_C::GetDefaultObj()
{
	static class UEngramEntry_BloodExtractor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_BloodExtractor_C*>(UEngramEntry_BloodExtractor_C::StaticClass()->DefaultObject);

	return Default;
}

}


