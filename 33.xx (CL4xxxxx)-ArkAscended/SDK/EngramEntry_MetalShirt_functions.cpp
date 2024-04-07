#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MetalShirt.EngramEntry_MetalShirt_C
// (None)

class UClass* UEngramEntry_MetalShirt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MetalShirt_C");

	return Clss;
}


// EngramEntry_MetalShirt_C EngramEntry_MetalShirt.Default__EngramEntry_MetalShirt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MetalShirt_C* UEngramEntry_MetalShirt_C::GetDefaultObj()
{
	static class UEngramEntry_MetalShirt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MetalShirt_C*>(UEngramEntry_MetalShirt_C::StaticClass()->DefaultObject);

	return Default;
}

}


