#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MetalFenceFoundation.EngramEntry_MetalFenceFoundation_C
// (None)

class UClass* UEngramEntry_MetalFenceFoundation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MetalFenceFoundation_C");

	return Clss;
}


// EngramEntry_MetalFenceFoundation_C EngramEntry_MetalFenceFoundation.Default__EngramEntry_MetalFenceFoundation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MetalFenceFoundation_C* UEngramEntry_MetalFenceFoundation_C::GetDefaultObj()
{
	static class UEngramEntry_MetalFenceFoundation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MetalFenceFoundation_C*>(UEngramEntry_MetalFenceFoundation_C::StaticClass()->DefaultObject);

	return Default;
}

}


