#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MetalGate.EngramEntry_MetalGate_C
// (None)

class UClass* UEngramEntry_MetalGate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MetalGate_C");

	return Clss;
}


// EngramEntry_MetalGate_C EngramEntry_MetalGate.Default__EngramEntry_MetalGate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MetalGate_C* UEngramEntry_MetalGate_C::GetDefaultObj()
{
	static class UEngramEntry_MetalGate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MetalGate_C*>(UEngramEntry_MetalGate_C::StaticClass()->DefaultObject);

	return Default;
}

}


