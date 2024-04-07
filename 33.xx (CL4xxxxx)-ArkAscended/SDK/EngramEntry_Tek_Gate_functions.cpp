#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Tek_Gate.EngramEntry_Tek_Gate_C
// (None)

class UClass* UEngramEntry_Tek_Gate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Tek_Gate_C");

	return Clss;
}


// EngramEntry_Tek_Gate_C EngramEntry_Tek_Gate.Default__EngramEntry_Tek_Gate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Tek_Gate_C* UEngramEntry_Tek_Gate_C::GetDefaultObj()
{
	static class UEngramEntry_Tek_Gate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Tek_Gate_C*>(UEngramEntry_Tek_Gate_C::StaticClass()->DefaultObject);

	return Default;
}

}


