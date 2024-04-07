#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MetalHatchet.EngramEntry_MetalHatchet_C
// (None)

class UClass* UEngramEntry_MetalHatchet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MetalHatchet_C");

	return Clss;
}


// EngramEntry_MetalHatchet_C EngramEntry_MetalHatchet.Default__EngramEntry_MetalHatchet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MetalHatchet_C* UEngramEntry_MetalHatchet_C::GetDefaultObj()
{
	static class UEngramEntry_MetalHatchet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MetalHatchet_C*>(UEngramEntry_MetalHatchet_C::StaticClass()->DefaultObject);

	return Default;
}

}


