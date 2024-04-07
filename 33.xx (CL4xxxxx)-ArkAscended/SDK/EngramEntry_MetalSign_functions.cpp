#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MetalSign.EngramEntry_MetalSign_C
// (None)

class UClass* UEngramEntry_MetalSign_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MetalSign_C");

	return Clss;
}


// EngramEntry_MetalSign_C EngramEntry_MetalSign.Default__EngramEntry_MetalSign_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MetalSign_C* UEngramEntry_MetalSign_C::GetDefaultObj()
{
	static class UEngramEntry_MetalSign_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MetalSign_C*>(UEngramEntry_MetalSign_C::StaticClass()->DefaultObject);

	return Default;
}

}


