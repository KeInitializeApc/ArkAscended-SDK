#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ScubaHelmet_Goggles.EngramEntry_ScubaHelmet_Goggles_C
// (None)

class UClass* UEngramEntry_ScubaHelmet_Goggles_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ScubaHelmet_Goggles_C");

	return Clss;
}


// EngramEntry_ScubaHelmet_Goggles_C EngramEntry_ScubaHelmet_Goggles.Default__EngramEntry_ScubaHelmet_Goggles_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ScubaHelmet_Goggles_C* UEngramEntry_ScubaHelmet_Goggles_C::GetDefaultObj()
{
	static class UEngramEntry_ScubaHelmet_Goggles_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ScubaHelmet_Goggles_C*>(UEngramEntry_ScubaHelmet_Goggles_C::StaticClass()->DefaultObject);

	return Default;
}

}


