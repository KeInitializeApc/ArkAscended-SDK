#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MetalGloves.EngramEntry_MetalGloves_C
// (None)

class UClass* UEngramEntry_MetalGloves_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MetalGloves_C");

	return Clss;
}


// EngramEntry_MetalGloves_C EngramEntry_MetalGloves.Default__EngramEntry_MetalGloves_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MetalGloves_C* UEngramEntry_MetalGloves_C::GetDefaultObj()
{
	static class UEngramEntry_MetalGloves_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MetalGloves_C*>(UEngramEntry_MetalGloves_C::StaticClass()->DefaultObject);

	return Default;
}

}


