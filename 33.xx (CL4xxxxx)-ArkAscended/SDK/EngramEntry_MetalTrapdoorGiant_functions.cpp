#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MetalTrapdoorGiant.EngramEntry_MetalTrapdoorGiant_C
// (None)

class UClass* UEngramEntry_MetalTrapdoorGiant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MetalTrapdoorGiant_C");

	return Clss;
}


// EngramEntry_MetalTrapdoorGiant_C EngramEntry_MetalTrapdoorGiant.Default__EngramEntry_MetalTrapdoorGiant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MetalTrapdoorGiant_C* UEngramEntry_MetalTrapdoorGiant_C::GetDefaultObj()
{
	static class UEngramEntry_MetalTrapdoorGiant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MetalTrapdoorGiant_C*>(UEngramEntry_MetalTrapdoorGiant_C::StaticClass()->DefaultObject);

	return Default;
}

}


