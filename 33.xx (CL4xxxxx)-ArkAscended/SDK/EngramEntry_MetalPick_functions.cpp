#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MetalPick.EngramEntry_MetalPick_C
// (None)

class UClass* UEngramEntry_MetalPick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MetalPick_C");

	return Clss;
}


// EngramEntry_MetalPick_C EngramEntry_MetalPick.Default__EngramEntry_MetalPick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MetalPick_C* UEngramEntry_MetalPick_C::GetDefaultObj()
{
	static class UEngramEntry_MetalPick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MetalPick_C*>(UEngramEntry_MetalPick_C::StaticClass()->DefaultObject);

	return Default;
}

}


