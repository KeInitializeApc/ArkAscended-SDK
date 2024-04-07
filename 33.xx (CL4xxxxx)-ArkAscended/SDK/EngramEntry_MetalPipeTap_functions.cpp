#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MetalPipeTap.EngramEntry_MetalPipeTap_C
// (None)

class UClass* UEngramEntry_MetalPipeTap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MetalPipeTap_C");

	return Clss;
}


// EngramEntry_MetalPipeTap_C EngramEntry_MetalPipeTap.Default__EngramEntry_MetalPipeTap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MetalPipeTap_C* UEngramEntry_MetalPipeTap_C::GetDefaultObj()
{
	static class UEngramEntry_MetalPipeTap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MetalPipeTap_C*>(UEngramEntry_MetalPipeTap_C::StaticClass()->DefaultObject);

	return Default;
}

}


