#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_AdobePillar.EngramEntry_AdobePillar_C
// (None)

class UClass* UEngramEntry_AdobePillar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_AdobePillar_C");

	return Clss;
}


// EngramEntry_AdobePillar_C EngramEntry_AdobePillar.Default__EngramEntry_AdobePillar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_AdobePillar_C* UEngramEntry_AdobePillar_C::GetDefaultObj()
{
	static class UEngramEntry_AdobePillar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_AdobePillar_C*>(UEngramEntry_AdobePillar_C::StaticClass()->DefaultObject);

	return Default;
}

}


