#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ChargeLantern.EngramEntry_ChargeLantern_C
// (None)

class UClass* UEngramEntry_ChargeLantern_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ChargeLantern_C");

	return Clss;
}


// EngramEntry_ChargeLantern_C EngramEntry_ChargeLantern.Default__EngramEntry_ChargeLantern_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ChargeLantern_C* UEngramEntry_ChargeLantern_C::GetDefaultObj()
{
	static class UEngramEntry_ChargeLantern_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ChargeLantern_C*>(UEngramEntry_ChargeLantern_C::StaticClass()->DefaultObject);

	return Default;
}

}


