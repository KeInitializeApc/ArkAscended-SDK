#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MetalCliffPlatform.EngramEntry_MetalCliffPlatform_C
// (None)

class UClass* UEngramEntry_MetalCliffPlatform_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MetalCliffPlatform_C");

	return Clss;
}


// EngramEntry_MetalCliffPlatform_C EngramEntry_MetalCliffPlatform.Default__EngramEntry_MetalCliffPlatform_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MetalCliffPlatform_C* UEngramEntry_MetalCliffPlatform_C::GetDefaultObj()
{
	static class UEngramEntry_MetalCliffPlatform_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MetalCliffPlatform_C*>(UEngramEntry_MetalCliffPlatform_C::StaticClass()->DefaultObject);

	return Default;
}

}


