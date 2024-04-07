#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MetalGateway.EngramEntry_MetalGateway_C
// (None)

class UClass* UEngramEntry_MetalGateway_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MetalGateway_C");

	return Clss;
}


// EngramEntry_MetalGateway_C EngramEntry_MetalGateway.Default__EngramEntry_MetalGateway_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MetalGateway_C* UEngramEntry_MetalGateway_C::GetDefaultObj()
{
	static class UEngramEntry_MetalGateway_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MetalGateway_C*>(UEngramEntry_MetalGateway_C::StaticClass()->DefaultObject);

	return Default;
}

}


