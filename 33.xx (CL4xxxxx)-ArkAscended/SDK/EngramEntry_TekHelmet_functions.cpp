#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekHelmet.EngramEntry_TekHelmet_C
// (None)

class UClass* UEngramEntry_TekHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekHelmet_C");

	return Clss;
}


// EngramEntry_TekHelmet_C EngramEntry_TekHelmet.Default__EngramEntry_TekHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekHelmet_C* UEngramEntry_TekHelmet_C::GetDefaultObj()
{
	static class UEngramEntry_TekHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekHelmet_C*>(UEngramEntry_TekHelmet_C::StaticClass()->DefaultObject);

	return Default;
}

}


