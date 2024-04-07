#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekBinoculars.EngramEntry_TekBinoculars_C
// (None)

class UClass* UEngramEntry_TekBinoculars_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekBinoculars_C");

	return Clss;
}


// EngramEntry_TekBinoculars_C EngramEntry_TekBinoculars.Default__EngramEntry_TekBinoculars_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekBinoculars_C* UEngramEntry_TekBinoculars_C::GetDefaultObj()
{
	static class UEngramEntry_TekBinoculars_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekBinoculars_C*>(UEngramEntry_TekBinoculars_C::StaticClass()->DefaultObject);

	return Default;
}

}


