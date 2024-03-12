#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_NotePaper.EngramEntry_NotePaper_C
// (None)

class UClass* UEngramEntry_NotePaper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_NotePaper_C");

	return Clss;
}


// EngramEntry_NotePaper_C EngramEntry_NotePaper.Default__EngramEntry_NotePaper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_NotePaper_C* UEngramEntry_NotePaper_C::GetDefaultObj()
{
	static class UEngramEntry_NotePaper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_NotePaper_C*>(UEngramEntry_NotePaper_C::StaticClass()->DefaultObject);

	return Default;
}

}


