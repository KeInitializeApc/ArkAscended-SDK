#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_StonePipeTap.EngramEntry_StonePipeTap_C
// (None)

class UClass* UEngramEntry_StonePipeTap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_StonePipeTap_C");

	return Clss;
}


// EngramEntry_StonePipeTap_C EngramEntry_StonePipeTap.Default__EngramEntry_StonePipeTap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_StonePipeTap_C* UEngramEntry_StonePipeTap_C::GetDefaultObj()
{
	static class UEngramEntry_StonePipeTap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_StonePipeTap_C*>(UEngramEntry_StonePipeTap_C::StaticClass()->DefaultObject);

	return Default;
}

}


