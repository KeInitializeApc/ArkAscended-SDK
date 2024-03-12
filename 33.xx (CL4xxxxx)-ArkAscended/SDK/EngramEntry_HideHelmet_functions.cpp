#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_HideHelmet.EngramEntry_HideHelmet_C
// (None)

class UClass* UEngramEntry_HideHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_HideHelmet_C");

	return Clss;
}


// EngramEntry_HideHelmet_C EngramEntry_HideHelmet.Default__EngramEntry_HideHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_HideHelmet_C* UEngramEntry_HideHelmet_C::GetDefaultObj()
{
	static class UEngramEntry_HideHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_HideHelmet_C*>(UEngramEntry_HideHelmet_C::StaticClass()->DefaultObject);

	return Default;
}

}


