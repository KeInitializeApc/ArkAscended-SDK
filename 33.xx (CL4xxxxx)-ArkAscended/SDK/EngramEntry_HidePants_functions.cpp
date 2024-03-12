#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_HidePants.EngramEntry_HidePants_C
// (None)

class UClass* UEngramEntry_HidePants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_HidePants_C");

	return Clss;
}


// EngramEntry_HidePants_C EngramEntry_HidePants.Default__EngramEntry_HidePants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_HidePants_C* UEngramEntry_HidePants_C::GetDefaultObj()
{
	static class UEngramEntry_HidePants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_HidePants_C*>(UEngramEntry_HidePants_C::StaticClass()->DefaultObject);

	return Default;
}

}


