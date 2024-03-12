#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ChainBola.EngramEntry_ChainBola_C
// (None)

class UClass* UEngramEntry_ChainBola_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ChainBola_C");

	return Clss;
}


// EngramEntry_ChainBola_C EngramEntry_ChainBola.Default__EngramEntry_ChainBola_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ChainBola_C* UEngramEntry_ChainBola_C::GetDefaultObj()
{
	static class UEngramEntry_ChainBola_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ChainBola_C*>(UEngramEntry_ChainBola_C::StaticClass()->DefaultObject);

	return Default;
}

}


