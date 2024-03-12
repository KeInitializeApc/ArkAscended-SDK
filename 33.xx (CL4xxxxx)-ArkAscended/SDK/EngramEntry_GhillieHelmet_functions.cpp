#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_GhillieHelmet.EngramEntry_GhillieHelmet_C
// (None)

class UClass* UEngramEntry_GhillieHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_GhillieHelmet_C");

	return Clss;
}


// EngramEntry_GhillieHelmet_C EngramEntry_GhillieHelmet.Default__EngramEntry_GhillieHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_GhillieHelmet_C* UEngramEntry_GhillieHelmet_C::GetDefaultObj()
{
	static class UEngramEntry_GhillieHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_GhillieHelmet_C*>(UEngramEntry_GhillieHelmet_C::StaticClass()->DefaultObject);

	return Default;
}

}


