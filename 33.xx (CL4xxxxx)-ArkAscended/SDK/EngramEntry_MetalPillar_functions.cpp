#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MetalPillar.EngramEntry_MetalPillar_C
// (None)

class UClass* UEngramEntry_MetalPillar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MetalPillar_C");

	return Clss;
}


// EngramEntry_MetalPillar_C EngramEntry_MetalPillar.Default__EngramEntry_MetalPillar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MetalPillar_C* UEngramEntry_MetalPillar_C::GetDefaultObj()
{
	static class UEngramEntry_MetalPillar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MetalPillar_C*>(UEngramEntry_MetalPillar_C::StaticClass()->DefaultObject);

	return Default;
}

}


