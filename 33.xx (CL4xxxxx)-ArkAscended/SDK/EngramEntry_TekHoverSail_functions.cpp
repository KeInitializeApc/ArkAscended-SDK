#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekHoverSail.EngramEntry_TekHoverSail_C
// (None)

class UClass* UEngramEntry_TekHoverSail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekHoverSail_C");

	return Clss;
}


// EngramEntry_TekHoverSail_C EngramEntry_TekHoverSail.Default__EngramEntry_TekHoverSail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekHoverSail_C* UEngramEntry_TekHoverSail_C::GetDefaultObj()
{
	static class UEngramEntry_TekHoverSail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekHoverSail_C*>(UEngramEntry_TekHoverSail_C::StaticClass()->DefaultObject);

	return Default;
}

}


