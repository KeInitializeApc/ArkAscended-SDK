#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MetalHelmet.EngramEntry_MetalHelmet_C
// (None)

class UClass* UEngramEntry_MetalHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MetalHelmet_C");

	return Clss;
}


// EngramEntry_MetalHelmet_C EngramEntry_MetalHelmet.Default__EngramEntry_MetalHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MetalHelmet_C* UEngramEntry_MetalHelmet_C::GetDefaultObj()
{
	static class UEngramEntry_MetalHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MetalHelmet_C*>(UEngramEntry_MetalHelmet_C::StaticClass()->DefaultObject);

	return Default;
}

}


