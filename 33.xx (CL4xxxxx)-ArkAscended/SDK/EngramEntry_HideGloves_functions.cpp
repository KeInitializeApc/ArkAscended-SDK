#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_HideGloves.EngramEntry_HideGloves_C
// (None)

class UClass* UEngramEntry_HideGloves_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_HideGloves_C");

	return Clss;
}


// EngramEntry_HideGloves_C EngramEntry_HideGloves.Default__EngramEntry_HideGloves_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_HideGloves_C* UEngramEntry_HideGloves_C::GetDefaultObj()
{
	static class UEngramEntry_HideGloves_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_HideGloves_C*>(UEngramEntry_HideGloves_C::StaticClass()->DefaultObject);

	return Default;
}

}


