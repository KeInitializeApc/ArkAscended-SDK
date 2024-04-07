#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekTransmitter.EngramEntry_TekTransmitter_C
// (None)

class UClass* UEngramEntry_TekTransmitter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekTransmitter_C");

	return Clss;
}


// EngramEntry_TekTransmitter_C EngramEntry_TekTransmitter.Default__EngramEntry_TekTransmitter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekTransmitter_C* UEngramEntry_TekTransmitter_C::GetDefaultObj()
{
	static class UEngramEntry_TekTransmitter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekTransmitter_C*>(UEngramEntry_TekTransmitter_C::StaticClass()->DefaultObject);

	return Default;
}

}


