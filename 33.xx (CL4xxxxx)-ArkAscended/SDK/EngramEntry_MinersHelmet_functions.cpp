#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MinersHelmet.EngramEntry_MinersHelmet_C
// (None)

class UClass* UEngramEntry_MinersHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MinersHelmet_C");

	return Clss;
}


// EngramEntry_MinersHelmet_C EngramEntry_MinersHelmet.Default__EngramEntry_MinersHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MinersHelmet_C* UEngramEntry_MinersHelmet_C::GetDefaultObj()
{
	static class UEngramEntry_MinersHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MinersHelmet_C*>(UEngramEntry_MinersHelmet_C::StaticClass()->DefaultObject);

	return Default;
}

}


