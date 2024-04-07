#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekGloves.EngramEntry_TekGloves_C
// (None)

class UClass* UEngramEntry_TekGloves_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekGloves_C");

	return Clss;
}


// EngramEntry_TekGloves_C EngramEntry_TekGloves.Default__EngramEntry_TekGloves_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekGloves_C* UEngramEntry_TekGloves_C::GetDefaultObj()
{
	static class UEngramEntry_TekGloves_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekGloves_C*>(UEngramEntry_TekGloves_C::StaticClass()->DefaultObject);

	return Default;
}

}


