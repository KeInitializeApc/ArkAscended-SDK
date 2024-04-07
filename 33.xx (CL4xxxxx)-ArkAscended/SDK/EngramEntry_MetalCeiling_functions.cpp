#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MetalCeiling.EngramEntry_MetalCeiling_C
// (None)

class UClass* UEngramEntry_MetalCeiling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MetalCeiling_C");

	return Clss;
}


// EngramEntry_MetalCeiling_C EngramEntry_MetalCeiling.Default__EngramEntry_MetalCeiling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MetalCeiling_C* UEngramEntry_MetalCeiling_C::GetDefaultObj()
{
	static class UEngramEntry_MetalCeiling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MetalCeiling_C*>(UEngramEntry_MetalCeiling_C::StaticClass()->DefaultObject);

	return Default;
}

}


