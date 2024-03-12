#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_StoneHatchet.EngramEntry_StoneHatchet_C
// (None)

class UClass* UEngramEntry_StoneHatchet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_StoneHatchet_C");

	return Clss;
}


// EngramEntry_StoneHatchet_C EngramEntry_StoneHatchet.Default__EngramEntry_StoneHatchet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_StoneHatchet_C* UEngramEntry_StoneHatchet_C::GetDefaultObj()
{
	static class UEngramEntry_StoneHatchet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_StoneHatchet_C*>(UEngramEntry_StoneHatchet_C::StaticClass()->DefaultObject);

	return Default;
}

}


