#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MetalSickle.EngramEntry_MetalSickle_C
// (None)

class UClass* UEngramEntry_MetalSickle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MetalSickle_C");

	return Clss;
}


// EngramEntry_MetalSickle_C EngramEntry_MetalSickle.Default__EngramEntry_MetalSickle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MetalSickle_C* UEngramEntry_MetalSickle_C::GetDefaultObj()
{
	static class UEngramEntry_MetalSickle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MetalSickle_C*>(UEngramEntry_MetalSickle_C::StaticClass()->DefaultObject);

	return Default;
}

}


