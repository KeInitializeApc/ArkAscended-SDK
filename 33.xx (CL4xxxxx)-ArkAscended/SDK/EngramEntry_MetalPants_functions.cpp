#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MetalPants.EngramEntry_MetalPants_C
// (None)

class UClass* UEngramEntry_MetalPants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MetalPants_C");

	return Clss;
}


// EngramEntry_MetalPants_C EngramEntry_MetalPants.Default__EngramEntry_MetalPants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MetalPants_C* UEngramEntry_MetalPants_C::GetDefaultObj()
{
	static class UEngramEntry_MetalPants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MetalPants_C*>(UEngramEntry_MetalPants_C::StaticClass()->DefaultObject);

	return Default;
}

}


