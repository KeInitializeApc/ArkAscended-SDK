#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MiningDrill.EngramEntry_MiningDrill_C
// (None)

class UClass* UEngramEntry_MiningDrill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MiningDrill_C");

	return Clss;
}


// EngramEntry_MiningDrill_C EngramEntry_MiningDrill.Default__EngramEntry_MiningDrill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MiningDrill_C* UEngramEntry_MiningDrill_C::GetDefaultObj()
{
	static class UEngramEntry_MiningDrill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MiningDrill_C*>(UEngramEntry_MiningDrill_C::StaticClass()->DefaultObject);

	return Default;
}

}


