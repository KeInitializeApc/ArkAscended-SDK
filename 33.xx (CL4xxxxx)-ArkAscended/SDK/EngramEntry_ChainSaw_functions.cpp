#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ChainSaw.EngramEntry_ChainSaw_C
// (None)

class UClass* UEngramEntry_ChainSaw_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ChainSaw_C");

	return Clss;
}


// EngramEntry_ChainSaw_C EngramEntry_ChainSaw.Default__EngramEntry_ChainSaw_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ChainSaw_C* UEngramEntry_ChainSaw_C::GetDefaultObj()
{
	static class UEngramEntry_ChainSaw_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ChainSaw_C*>(UEngramEntry_ChainSaw_C::StaticClass()->DefaultObject);

	return Default;
}

}


