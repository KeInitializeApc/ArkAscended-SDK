#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MetalLadder.EngramEntry_MetalLadder_C
// (None)

class UClass* UEngramEntry_MetalLadder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MetalLadder_C");

	return Clss;
}


// EngramEntry_MetalLadder_C EngramEntry_MetalLadder.Default__EngramEntry_MetalLadder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MetalLadder_C* UEngramEntry_MetalLadder_C::GetDefaultObj()
{
	static class UEngramEntry_MetalLadder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MetalLadder_C*>(UEngramEntry_MetalLadder_C::StaticClass()->DefaultObject);

	return Default;
}

}


