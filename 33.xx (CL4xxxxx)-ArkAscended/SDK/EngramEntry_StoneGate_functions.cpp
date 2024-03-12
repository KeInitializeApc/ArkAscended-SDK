#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_StoneGate.EngramEntry_StoneGate_C
// (None)

class UClass* UEngramEntry_StoneGate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_StoneGate_C");

	return Clss;
}


// EngramEntry_StoneGate_C EngramEntry_StoneGate.Default__EngramEntry_StoneGate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_StoneGate_C* UEngramEntry_StoneGate_C::GetDefaultObj()
{
	static class UEngramEntry_StoneGate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_StoneGate_C*>(UEngramEntry_StoneGate_C::StaticClass()->DefaultObject);

	return Default;
}

}


