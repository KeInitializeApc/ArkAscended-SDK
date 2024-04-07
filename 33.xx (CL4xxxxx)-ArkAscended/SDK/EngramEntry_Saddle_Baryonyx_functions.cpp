#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Saddle_Baryonyx.EngramEntry_Saddle_Baryonyx_C
// (None)

class UClass* UEngramEntry_Saddle_Baryonyx_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Saddle_Baryonyx_C");

	return Clss;
}


// EngramEntry_Saddle_Baryonyx_C EngramEntry_Saddle_Baryonyx.Default__EngramEntry_Saddle_Baryonyx_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Saddle_Baryonyx_C* UEngramEntry_Saddle_Baryonyx_C::GetDefaultObj()
{
	static class UEngramEntry_Saddle_Baryonyx_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Saddle_Baryonyx_C*>(UEngramEntry_Saddle_Baryonyx_C::StaticClass()->DefaultObject);

	return Default;
}

}


