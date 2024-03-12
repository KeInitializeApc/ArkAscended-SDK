#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_GhillieGloves.EngramEntry_GhillieGloves_C
// (None)

class UClass* UEngramEntry_GhillieGloves_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_GhillieGloves_C");

	return Clss;
}


// EngramEntry_GhillieGloves_C EngramEntry_GhillieGloves.Default__EngramEntry_GhillieGloves_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_GhillieGloves_C* UEngramEntry_GhillieGloves_C::GetDefaultObj()
{
	static class UEngramEntry_GhillieGloves_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_GhillieGloves_C*>(UEngramEntry_GhillieGloves_C::StaticClass()->DefaultObject);

	return Default;
}

}


