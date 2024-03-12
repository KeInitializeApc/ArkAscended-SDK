#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MetalBoots.EngramEntry_MetalBoots_C
// (None)

class UClass* UEngramEntry_MetalBoots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MetalBoots_C");

	return Clss;
}


// EngramEntry_MetalBoots_C EngramEntry_MetalBoots.Default__EngramEntry_MetalBoots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MetalBoots_C* UEngramEntry_MetalBoots_C::GetDefaultObj()
{
	static class UEngramEntry_MetalBoots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MetalBoots_C*>(UEngramEntry_MetalBoots_C::StaticClass()->DefaultObject);

	return Default;
}

}


